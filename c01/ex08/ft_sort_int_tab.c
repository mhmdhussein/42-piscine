/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:38:32 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/18 22:19:00 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				swap(&*(tab + j), &*(tab + j + 1));
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}
