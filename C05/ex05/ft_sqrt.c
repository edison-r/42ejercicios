int	ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i <= 46340) // 46340 es el máximo entero cuya raíz cuadrada no desborda int
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
    printf("Raíz cuadrada de 25: %d (Esperado: 5)\n", ft_sqrt(25));
    printf("Raíz cuadrada de 10: %d (Esperado: 0)\n", ft_sqrt(10));
    printf("Raíz cuadrada de 144: %d (Esperado: 12)\n", ft_sqrt(144));
    printf("Raíz cuadrada de -4: %d (Esperado: 0)\n", ft_sqrt(-4));
    printf("Raíz cuadrada de 2147395600: %d (Esperado: 46340)\n", ft_sqrt(2147395600));

    return 0;
}

