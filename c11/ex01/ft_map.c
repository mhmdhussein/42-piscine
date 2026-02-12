/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:42:40 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/06 10:47:49 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int *)malloc(sizeof(int) * length);
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		*(result + i) = f(*(tab + i));
		i++;
	}
	return (result);
}
