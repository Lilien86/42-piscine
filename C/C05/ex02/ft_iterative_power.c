/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:26:05 by lauger            #+#    #+#             */
/*   Updated: 2023/07/20 20:41:18 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	result;

	n = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (n < power)
	{
		result = result * nb;
		n++;
	}
	return (result);
}
