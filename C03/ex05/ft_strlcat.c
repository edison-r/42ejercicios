#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int 	i;

	int	len_dest;
	int	len_src;
	
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	
	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	
	if (size <= len_dest) 
		return (size + len_src);

	i = 0;
	while (src[i] != '\0' && (len_dest + i) < (size - 1))
	{
	    dest[len_dest + i] = src[i];
	    i++;
	}
	
	dest[len_dest + i] = '\0';
	
	return (len_dest + len_src);
}


int 	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	unsigned int	size;
	unsigned int	result;

	if (argc != 4)
		return (1);

	src = argv[2];
	dest = argv[1];
	size = atoi(argv[3]);

	printf("Source: %s\n", src);
	printf("Destino: %s\n\n", dest);

	result = ft_strlcat(dest, src, size);

	printf("Concatenado: %s\n", dest);
	printf("Tamaño necesario: %u\n", result);

	return (0);
}
