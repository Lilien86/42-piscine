/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:58:37 by lauger            #+#    #+#             */
/*   Updated: 2023/07/21 18:16:11 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	j;

	ac = ac -1;
	while (ac != 0)
	{
		j = 0;
		while (av[ac][j])
		{
			write(1, &av[ac][j], 1);
			j++;
		}
		write(1, "\n", 1);
		ac--;
	}
}
