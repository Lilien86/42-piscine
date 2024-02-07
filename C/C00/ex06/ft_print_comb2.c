/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:26:53 by lauger            #+#    #+#             */
/*   Updated: 2023/07/13 18:18:27 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_display(int number_one, int number_two)
{
	write(1, &(char){number_one / 10 + 48}, 1);
	write(1, &(char){number_one % 10 + 48}, 1);
	write(1, " ", 1);
	write(1, &(char){number_two / 10 + 48}, 1);
	write(1, &(char){number_two % 10 + 48}, 1);
	if (number_one != 98 || number_two != 99)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb2(void)
{
	int	number_one;
	int	number_two;

	number_one = 0;
	while (number_one <= 98)
	{
		number_two = number_one + 1;
		while (number_two <= 99)
		{
			ft_display(number_one, number_two);
			number_two++;
		}
		number_one++;
	}
}
