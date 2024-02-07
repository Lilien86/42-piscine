/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:44:07 by lauger            #+#    #+#             */
/*   Updated: 2023/07/24 09:56:14 by lauger           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
