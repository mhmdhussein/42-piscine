/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:04:39 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/18 16:46:39 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{
			z = y +1;
			while (z <= '9')
			{
				print_num(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
