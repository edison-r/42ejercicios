#include <stdio.h>

int	ft_fibonacci(int index)
{

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
				
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	
}

int main(void)
{
    for (int i = 0; i <= 15; i++)
        printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
    
    return (0);
}

