/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:02:57 by lauger            #+#    #+#             */
/*   Updated: 2023/08/02 09:51:23 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;
	int	i;

	n = 0;
	i = 0;
	while (n < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = temp ;
		n++;
	}
	while (i < size)
	{
		printf("%d", tab[i]);
		printf(" ");
		i++; 
	}
}

int		main(int ac, char **av)
{
	int 	*tab;
	int		j = 0;
	
	tab = malloc(sizeof(int) * ac);
	if (tab == NULL)
		return (0);

	while (j < ac)
	{
		tab[j] = atoi(av[j]);
		j++;
	}
	ft_rev_int_tab(tab, ac);
	
	
}
