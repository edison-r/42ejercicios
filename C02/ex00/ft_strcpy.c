#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{

	int	i;
	
	i = -1;
	while (src[++i] != 0){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}

int	main(void)
{
	char	src[100] = "Prueba";
	char	dest[100] = "Test";
	
	printf("Original: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After ft_strcpy: %s", dest);
	
}
