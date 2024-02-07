/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize_plus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:52:35 by lauger            #+#    #+#             */
/*   Updated: 2023/07/31 20:39:06 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_verif(char str)
{
	int		i;

	i = 0;
	if (str >= 'A' && str <= 'Z')
		return (1);
	else if (str >= 'a' && str <= 'z')
		return (2);
	else if (!(str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (3);
	else 
		return (0);
}

char	*ft_capitalize_plus(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_verif(str[i]) == 2)//premiere lettre
			str[0] = str[0] - 32;

		else if (ft_verif(str[i]) == 2 && ft_verif(str[i - 1]) == 3)//premiere lettre chaque mot 
			str[i] = str[i] - 32;

		else if (ft_verif(str[i]) == 1 && ft_verif(str[i - 1]) != 3)//maj em min
			str[i] = str[i] + 32;

		else if (ft_verif(str[i]) == 1 && ft_verif(str[i + 1]) != 3)//derniere lettre 
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s",ft_capitalize_plus(av[1]));
}
