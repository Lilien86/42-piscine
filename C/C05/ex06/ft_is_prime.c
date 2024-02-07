/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:48:37 by lauger            #+#    #+#             */
/*   Updated: 2023/07/24 09:43:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nb_research;

	nb_research = 2;
	if (nb == 2147483647)
		return (1);
	if (nb < 0)
		return (0);
	while (nb_research * nb_research <= nb)
	{
		if (nb % nb_research == 0)
		{
			return (0);
		}
		nb_research++;
	}
	return (1);
}
