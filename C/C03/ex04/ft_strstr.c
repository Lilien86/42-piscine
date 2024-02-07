/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:24:22 by lauger            #+#    #+#             */
/*   Updated: 2023/07/18 11:47:20 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str, char *to_find)
{
	while (*str == *to_find && *str != 0 && *to_find != 0)
	{
		str++;
		to_find++;
	}
	if (*to_find == 0)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == 0 && *to_find == 0)
		return (str);
	while (*str)
	{
		if (ft_check(str, to_find))
			return (str);
		else
			str++;
	}
	return (0);
}
