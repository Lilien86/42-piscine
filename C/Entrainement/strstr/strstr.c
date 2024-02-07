/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:37:10 by lauger            #+#    #+#             */
/*   Updated: 2023/08/03 19:53:25 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verif(char *c_str, char *c_to_find)
{
	int		i;

	i = 0;
	while (c_str[i] == c_to_find[i] && (c_str[i] != '\0' && c_to_find[i] != '\0'))
		i++;
	if (c_to_find[i] == '\0')
		return (1);
	else 
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == 0 && *to_find == 0)
		return (str);
	while (*str)
	{
		
		str++;
	}
}


int		main(int argc, char *argv)
{
	if (argc != 2)
		return (0);
	ft_strstr(argv[1], argv[2]);
}
