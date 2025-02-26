#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int	res;

	if (argc != 3)
		return (1);
		
	s1 = argv[1];
	s2 = argv[2];
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	res = ft_strcmp(s1, s2);
	printf("resultado: %i\n", res);
	
	return (0);
}
