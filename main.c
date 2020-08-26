#include <stdio.h>

int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	printf("len = %d\n", ft_strlen(av[1]));
	return (0);
}