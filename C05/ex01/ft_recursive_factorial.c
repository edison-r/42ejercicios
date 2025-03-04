#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(int argc, char **argv)
{
	int	num;
	int	res;
	
	if(argc != 2)
		return (1);
		
	num = atoi(argv[1]);
	res = ft_recursive_factorial(num);
	
	printf("%i!: %i\n", num, res);
	
	return (0);
}
