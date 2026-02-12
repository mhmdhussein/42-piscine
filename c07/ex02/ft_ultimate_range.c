/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:48:49 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/25 17:55:40 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		*arr;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (0);
	}
	*range = arr;
	i = 0;
	while (i < size)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (size);
}
