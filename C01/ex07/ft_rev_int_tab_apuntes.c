#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i; // variable para recorrer el array
	int	last; // para recorrer el array desde el final
	int	temp; // variable temporal para guardar valores
	
	last = size - 1; // last es las posicion en el array por lo que es 1 menos que el tamaño

	i = 0;
	while (i < last) // solo recorre la mitad del array
	{
		temp = tab[i]; // guardo lo que hay en el principio del array en temp
		tab[i] = tab[last]; // guardo los numeros desde el final al principio del array
		tab[last] = temp; // guardo lo que habia al principio al final del array
		i++; // incremento la i para pasar a la siguiente posicion
		last--; // decremento el last para recorrer uno menos del final
	}
}

int	main(void)
{
	int	size = 5;
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;
	
	ft_rev_int_tab(tab, size);
	
	i = -1; // inicializo en -1 xq en la primera iteracion lo sube a 0. *trukito*
	while (++i < size) // mientras q i sea menor al tamaño, imprime.
		printf("%i", tab[i]); // imprime el array, 1 a 1.
	
	return (0);
}
