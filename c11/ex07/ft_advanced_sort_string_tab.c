/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:23:13 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/06 15:05:44 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		swapped;
	char	*swap;

	swapped = 1;
	while (swapped == 1)
	{
		i = 0;
		swapped = 0;
		while (tab[i + 1] != NULL)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				swapped = 1;
			}
			i++;
		}
	}
}
