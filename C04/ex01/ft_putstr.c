#include <unistd.h>

void	ft_putstr(char *str)
{	
	if (str[0] != '\0') // if (!str) -> si str no es true = si es false
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

int	main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	
	return (0);
}
