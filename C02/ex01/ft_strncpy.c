#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{

	unsigned int	i;

	if (n < 0)
		n = 0;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/*
	i = -1;
	while (++i < n && (dest[i] = src[i]) != '\0') - Otra manera mas resumido
	*/

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}

int	main(void)
{
	char	src[] = "sdsdaads";
	char	dest[100] = "abcd";
	unsigned int	n = 5;
	
	printf("Original: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("After ft_strcpy: %s", dest);
	
	return (0);
	
}
