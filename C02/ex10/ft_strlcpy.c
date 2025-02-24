#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int	i;
	unsigned int	src_len;

	// Calculo de la longitud de src[]
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;

	// si size es 0, retorna la longitud de src[]
	if (size == 0)
		return (src_len);

	// copio lo que hay en src[] a dest[]
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // añado el NULL

	return (src_len);

}

int	main(int argc, char **argv)
{
	char	*src;
	char	dest[13];
	unsigned int	size;
	
	if (argc != 2)	
		return (1);
		
	src = argv[1]; // apunta src a la cadena de entrada
	
	size = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copiado: %s\n", dest);
	printf("Longitud: %u\n", size);
	
	return (0);
	
}
