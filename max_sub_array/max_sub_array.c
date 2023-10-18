#include <stdio.h>

int	maxSubarray(int arr[], int size)
{
	int	add;
	int	maxSum;
	int	i;
	int	j;

	i = 0;
	j = i;
	maxSum = arr[0];
	while (i <= size - 4)
	{
		add = 0;
		j = i;
		while (j < i + 4)
		{
			add += arr[j];
			j++;
		}
		if (add > maxSum)
			maxSum = add;
		i++;
	}
	return maxSum;
}

int	main(void)
{
	int	arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int	size;
	int	result;

	size = sizeof(arr) / sizeof(arr[0]);
	result = maxSubarray(arr, size);
	printf("%d",result);
}
