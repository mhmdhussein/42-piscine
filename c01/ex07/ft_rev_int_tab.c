/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:54:51 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/18 21:37:18 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + j);
		*(tab + j) = tmp;
		i++;
		j--;
	}
}
