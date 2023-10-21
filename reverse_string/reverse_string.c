#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], sizeof(str[i]));
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *str, int i, int x)
{
	char	temp;

	temp = str[i];
	str[i] = str[x];
	str[x] = temp;
}

void	reverse_string(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = ft_strlen(str) - 1;
	while (i < (x / 2))
	{
		ft_swap(str, i, x);
		i++;
		x--;
	}
	ft_putstr(str);
}

int	main(int argc, void **argv)
{
	char	s[] = "One piece";
	reverse_string(s);
}
