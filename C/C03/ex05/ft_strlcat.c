/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:43:28 by lauger            #+#    #+#             */
/*   Updated: 2023/07/18 20:23:36 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}	
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;
	unsigned int	full_size;
	unsigned int	j;

	j = 0;
	while (dest[j] && j < size)
		j++;
	full_size = ft_strlen(src) + j;
	if (size > 0)
	{	
		counter = ft_strlen(dest);
		i = 0;
		while (counter < size - 1 && src[i] != '\0')
		{
			dest[counter] = src[i];
			counter++;
			i++;
		}
		dest[counter] = '\0';
	}
	return (full_size);
}
