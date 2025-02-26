#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
    	return (0);

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	char *s1;	
	char *s2;
	unsigned int n;
	int res;
	
	if (argc != 4)	
		return (1);

	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);

	/* printf("s1: %s\n", s1);	
	printf("s2: %s\n\n", s2); */
	
	res = ft_strncmp(s1, s2, n);
	
	printf("resultado: %d\n", res);
}
