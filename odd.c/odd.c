#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '+')
			str++;
		else
		{
			sign *= -1;
			str++;
		}

	}
	while ((*str >= '0' && *str <= '9'))
	{
		res = res * 10 - *str - 48;
		str++;
	}
	return (sign * res);
}

void	ft_odd(int nb)
{
	if (nb % 2 == 0)
	{
		write(1, "even", 4);
		return ;
	}
	else
	{
		write(1, "odd", 3);
		return ;
	}
}

int	main(int argc, void **argv)
{
	if (argc < 2)
		return (0);
	ft_odd(ft_atoi(argv[1]));
}
