/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:06:28 by lauger            #+#    #+#             */
/*   Updated: 2023/07/20 18:21:32 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			cnt;
	long long	l_nbr;

	cnt = 0;
	l_nbr = (long long)nbr;
	if (check_base(base) == 0)
		return ;
	while (base[cnt])
		cnt++;
	if (l_nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = -l_nbr;
	}
	if (l_nbr < cnt)
		write(1, &base[l_nbr], 1);
	else
	{	
		ft_putnbr_base(l_nbr / cnt, base);
		ft_putnbr_base(l_nbr % cnt, base);
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i +1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || (base[i] == '-' || base[i] == '+'))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int main()
{
	ft_putnbr_base(25, "wygy");
}
