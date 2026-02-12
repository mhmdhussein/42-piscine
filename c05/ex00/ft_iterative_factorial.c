/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:59:12 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/24 10:12:32 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
