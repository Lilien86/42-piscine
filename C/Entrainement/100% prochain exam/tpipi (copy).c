#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	f(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		char off = (str[i] >= 'a' && str[i] <= 'z') * 'a' + (str[i] >= 'A' && str[i] <= 'Z') * 'A';
		write (1, &(char){ (off != 0) * (off + ((str[i] - off + 13) % 26)) + (!off) * str[i] }, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		f(av[1]);
}
