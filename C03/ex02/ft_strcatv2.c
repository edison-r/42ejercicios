#include <stdio.h>
#include <stdlib.h> // malloc() y free()

int		ft_strlen(char *str) // Para conseguir el largo de src y dest y asignar memoria
{
	int	counter;
	
	counter = 0;
	while (*str != 0)
	{
		str++;
		counter++;
	}
	
	return (counter);
}

char	*ft_strcpy(char *dest, char *src) // Copia para el dest para que sea modificable
{

	int	i;
	
	i = -1;
	while (src[++i] != 0){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}

char	*ft_strcat(char *dest, char *src)
{
	int 	i;
	int  	j;

	i = 0;
	while (dest[i] != '\0') // Primero encuentra el final de dest
		i++;

	j = 0;
	while (src[j] != '\0') // Copia src en dest
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0'; // Se añade el NULL al final

	return (dest);

}

int 	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	int 	len_dest;
	int 	len_src;

	if (argc != 3)
		return (1);

	src = argv[2];
	len_dest = ft_strlen(argv[1]); // Calcula la longitud de dest (pasago por argumento)
	len_src = ft_strlen(src); // Calcula la longitud de src

	// Reservar la memoria para dest 
	dest = malloc(len_dest + len_src + 1); // +1 para `\0`

	if (!dest) // Si malloc() falla, devuelve NULL. Esto comprueba si malloc() devolvió NULL
			return (1);

	ft_strcpy(dest, argv[1]); // Copia la primera palabra en dest

	printf("SRC: %s\n", src);
	printf("Original DEST: %s\n\n", dest);

	ft_strcat(dest, src);

	printf("RESULT: %s\n", dest);	

	free(dest); // Libear la memoria reservada con malloc()

	return (0);
}