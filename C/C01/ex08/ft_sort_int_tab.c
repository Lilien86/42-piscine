/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:45:55 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 08:54:40 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_sort_int_tab(char *str, int size)
{
	int	n;
	int	temp;

	n = 0;
	while (n < size - 1)
	{
		if (str[n] > str[n + 1])
		{
			temp = str[n];
			str[n] = str[n + 1];
			str[n + 1] = temp;
			n = 0;
		}
		else
		n++;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%s", ft_sort_int_tab(av[1], atoi(av[2])));

}
