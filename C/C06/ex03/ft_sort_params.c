/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:16:45 by lauger            #+#    #+#             */
/*   Updated: 2023/07/24 19:23:08 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i])
		return (s1[i]);
	if (s2[i])
		return (-s2[i]);
	return (0);
}

void	ft_sort_tab(char **str, int size)
{
	int		n;
	char	*temp;

	n = 0;
	while (n < size - 1)
	{
		if (ft_strcmp(str[n], str[n + 1]) > 0)
		{
			temp = str[n];
			str[n] = str[n + 1];
			str[n + 1] = temp;
			n = 0;
		}
		else
		n++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	ac--;
	av++;
	ft_sort_tab(av, ac);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
