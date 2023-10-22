#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_reverse_integer(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_reverse_integer(nb % 10);
		ft_reverse_integer(nb / 10);
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
}

int	main(void)
{
	int	nb;

	nb = -400000;
	ft_reverse_integer(nb);
	return 0;
}
