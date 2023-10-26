#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int **tab, int y)
{
	int	i;

	i = 1;
	while (tab[y][i])
		i++;
	return (i);
}

int	kthGrammar(int n, int k)
{
	int	y;
	int	x;
	int	len;
	int	**tab;

	y = 1;
	tab = (int *)malloc(n * sizeof(int));
	if (!tab)
		return (NULL);
	while (y < n)
	{
		tab[y][x] = 0;
		x = 1;
		len = strlen(tab[y][x]);
		while (x < len)
		{
			
		}

	}
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
