/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:08:23 by lauger            #+#    #+#             */
/*   Updated: 2023/07/24 08:47:02 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	nb_research;

	nb_research = 2;
	if (nb < 0)
		return (0);
	while (nb_research < nb && nb <= 46340)
	{
		if (nb % nb_research == 0)
		{	
			return (0);
		}
		nb_research++;
	}
	return (1);
}
