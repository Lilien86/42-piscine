/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mainultr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:50:56 by lauger            #+#    #+#             */
/*   Updated: 2023/07/30 16:18:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_condition(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (2);
	else if (c >= 48 && c <= 57)
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check_condition(str[0]) == 1)
			str[0] -= 32;
		else if (ft_check_condition(str[i]) == 0
			&& ft_check_condition(str[i + 1]) == 1)
			str[i + 1] -= 32;
		else if (ft_check_condition(str[i]) != 0
			&& ft_check_condition(str[i + 1]) == 2)
			str[i + 1] += 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	ac--;
	av++;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	while (i < ac)
	{
		ft_strcapitalize(av[i]);
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j += 2;
		}
		write(1, " ", 1);
		i++;
	}
}
