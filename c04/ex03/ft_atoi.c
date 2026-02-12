/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:03:39 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/03 11:59:47 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= (-1);
		}
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr * sign);
}
