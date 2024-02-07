#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	f(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
				if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
				{
					c = str[i] + 13;
				}
				else 
				{
					c = str[i] - 13;
				}
				write(1, &c, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

//   ./..
int	main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	f(av[1]);
	return (0);
}
