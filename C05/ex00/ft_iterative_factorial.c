#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	
	int	result;
	
	if (nb < 0)
		return (0);
		
	if (nb == 0 || nb == 1)
		return (1);
	
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	
	return (result);
}

int	main(int argc, char **argv)
{
	int	num;
	int	res;
	
	if(argc != 2)
		return (1);
		
	num = atoi(argv[1]);
	res = ft_iterative_factorial(num);
	
	printf("%i!: %i\n", num, res);
	
	return (0);
}
