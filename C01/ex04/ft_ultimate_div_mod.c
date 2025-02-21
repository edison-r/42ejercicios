#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b) 
{
	int	i; // intermedio de a
	int	j; // intermedio de b
	
	i = *a;
	j = *b;
	
	*a = i / j;
	*b = i % j;
}

int	main(void)
{

	int	a;
	int	b;
	
	a = 100;
	b = 3;
	printf("a: %i", a);
	printf("\n");
	printf("b: %i", b);
	printf("\n\n");
	ft_ultimate_div_mod(&a, &b);
	printf("div: %i", a);
	printf("\n");
	printf("mod: %i", b);
}
