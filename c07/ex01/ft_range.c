/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:37:56 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/25 17:48:21 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*arr;
	int		i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
