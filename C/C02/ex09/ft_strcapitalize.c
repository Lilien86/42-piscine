/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:53:32 by lauger            #+#    #+#             */
/*   Updated: 2023/07/17 18:50:50 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
