/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:00:54 by lauger            #+#    #+#             */
/*   Updated: 2023/07/26 17:13:50 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n + 1);
}

int	ft_totalen(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;

	total_size = 0;
	i = 0;
	while (strs[i])
	{
		total_size += ft_strlen(strs[i]);
		if (i != size - 1)
			total_size += ft_strlen(sep);
		i++;
	}
	total_size++;
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof (char) * ft_totalen(size, strs, sep));
	*dest = 0;
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	dest[ft_strlen(dest) - 1] = '\0';
	return (dest);
}
