#include <stdio.h>
#include <stdlib.h>

/*void	print_double_array(int **array, int num_row, int num_cols)
{
	for(int i = 0; i < num_row; i++)
	{
		for(int j = 0; j < num_cols; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}*/

int	kthGrammar(int n, int k)
{
	int	y;
	int	x;
	int	len;
	int	**double_tab;
	int	res;

	y = 0;
	x = 0;
	len = 1;
	double_tab = (int **)malloc(n * sizeof(int *));
	if (!double_tab)
		return (0);
	double_tab[y] = (int *)malloc(len * sizeof(int));
	if (!double_tab[y])
		return (0);
	len = 2;
	for(y = 1; y < n; y++)
	{
		double_tab[y] = (int *)malloc(len * sizeof(int));
		if (!double_tab[y])
			return (0);
		for(int i = 0; i < len; i += 2)
		{
			if (double_tab[y - 1][i] == 0)
			{
				double_tab[y][i] = 0;
				double_tab[y][i + 1] = 1;
			}
			else if (double_tab[y - 1][i] == 1)
			{
				double_tab[y][i] = 1;
				double_tab[y][i + 1] = 	0;
			}
		}
		len *= 2;
	}
	//print_double_array(double_tab, n, y);
	res = double_tab[n - 1][k - 1];
	for (int i = 0; i < n; i++) 
   		 free(double_tab[i]);
	free(double_tab);
	return (res);
}

int	main()
{
	int	n;
	int	k;

	n = 5;
	k = 2;
	printf("The result is: %d", kthGrammar(n, k));
	return (0);
}
