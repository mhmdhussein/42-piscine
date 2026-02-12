/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:50:05 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/24 10:56:56 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int		i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
