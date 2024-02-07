/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:34:04 by lauger            #+#    #+#             */
/*   Updated: 2023/08/03 17:41:41 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_nb(int	nb)
{
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_put_nb(-nb);
	}
	else if (nb < 10)
	{
		int		c;

		c = '0' + nb;
		write(1, &c, 1);
	}
	else
	{
		ft_put_nb(nb / 10);
		ft_put_nb(nb % 10);
	}
}

int		main(void)
{
	ft_put_nb(1111111);
	return (0);
}
