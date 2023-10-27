#include <stdio.h>
#include <stdlib.h>

int	kthGrammar(int n, int k)
{
	int	y;
	int	x;
	int	len;
	int	**double_tab;
	int	res;

	y = 0;
	x = 0;
	double_tab = (int **)malloc(n * sizeof(int *));
	if (!double_tab)
		return (0);
	for (y = 0; y < n; y++;)
	{
		double_tab[y] = (int *)malloc((1 << y) * sizeof(int))
		if (!double_tab[y])
			return (0);
	}
	while (y < n)
	{
		int	*uni_tab;
		int	i;

		while (x < x * 2)
		{
			uni_tab = (int *)malloc((x * 2) * sizeof(int));
			if (!uni_tab)
				return (0);
			if (double_tab[y][x] == 0)
			{
				uni_tab[i] = 0;
				uni_tab[i + 1] = 1;
				x++;
				i += 2;
			}
			else if (double_tab[y][x] == 1)
			{
				uni_tab[i] = 1;
				uni_tab[i + 1] = 0;
				x++;
				i += 2;
			}
		}

			double_tab[y + 1][x] = uni_tab[i];
			y++;
	}
	res = double_tab[n][k];
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
	k = 2 * n - 1;
	printf("The result is: %d", kthGrammar(n, k));
	return (0);
}
