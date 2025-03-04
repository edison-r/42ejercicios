#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{

	long int = num;
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}

	ft_putchar((nb % 10) + '0');
}

int	main(int argc, char **argv)
{
	int	nb;
	
	if (argc != 2)
		return (1);
		
	nb = atoi(argv[1]);
	
	ft_putnbr(nb);
	
	return (0);
}
