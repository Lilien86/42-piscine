/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:08:50 by lauger            #+#    #+#             */
/*   Updated: 2023/07/30 15:50:23 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convers(char c)
{
	char 	*base;

	base = "123456789abcdef";
		write(1, "\\", 1);
		write(1, &base[c / 16], 1);
		write(1, &base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_convers(str[i]);
		}
		else 
			write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac !=  2)
		return(0);
	ft_putstr_non_printable(av[1]);
	return (0);
}
