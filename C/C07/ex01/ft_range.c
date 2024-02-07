/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:28:44 by lauger            #+#    #+#             */
/*   Updated: 2023/07/25 13:32:27 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	if (min >= max)
	{
		str = NULL;
		return (str);
	}
	str = malloc (sizeof(int) * (max - min));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
