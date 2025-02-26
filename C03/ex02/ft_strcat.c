#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int 	i;
	int  	j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}

int 	main(int argc, char **argv)
{
	char	*dest;
	char	*src;

	if (argc != 3)
		return (1);

	src = argv[2];
	dest = argv[1];

	printf("SRC: %s\n", src);
	printf("Original DEST: %s\n\n", dest);

	ft_strcat(dest, src);

	printf("RESULT: %s\n", dest);	

	return (0);
}