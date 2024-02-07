/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:35:40 by lauger            #+#    #+#             */
/*   Updated: 2023/07/16 08:41:18 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (!(str[n] >= 32 && str[n] <= 126))
		{
			return (0);                                                            
		}
		str++;
	}
	return (1);
}