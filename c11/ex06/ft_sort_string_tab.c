/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:03:02 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/06 14:22:25 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == '\0')
			return (0);
	return (*s1 - *(s2 - 1));
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	size;
	int	j;
	int	i;

	size = 0;
	while (*(tab + size) != NULL)
	{
		size++;
	}
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(*(tab + j), *(tab + j + 1)) > 0)
			{
				swap((tab + j), (tab + j + 1));
			}
			j++;
		}
		i++;
	}
}
