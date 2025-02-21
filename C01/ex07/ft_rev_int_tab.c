#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last;
	int	temp;
	
	last = size - 1;
	i = -1;
	while (++i < last)
	{
		temp = tab[i];
		tab[i] = tab[last];
		tab[last] = temp;	
		last--;
	}
	
}

int	main(void)
{
	int	size;
	int	tab[6] = {1,2,3,4,5,6};
	int	i;
	
	size = 6;
	
		i = -1;
	while (++i < size)
	{
		printf("%i ", tab[i]);
	}
	
	printf("\n");
	ft_rev_int_tab(tab, size);
	
	i = -1;
	while (++i < size)
	{
		printf("%i ", tab[i]);
	}
	
	return (0);
}
