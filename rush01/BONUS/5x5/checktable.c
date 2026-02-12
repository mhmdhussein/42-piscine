/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:56 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/28 13:02:31 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkline(int *line, int viewnb, int reverse);

int	checkcol(int *table, int *views)
{
	int		i;
	int		j;
	int		*line;

	line = (int *)malloc(5 * 4);
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			*(line + j) = *(table + (j * 5) + i);
			j++;
		}
		if (!checkline(line, *(views + i), 0)
			|| !checkline(line, *(views + i + 5), 1))
		{
			return (0);
		}
		i++;
	}
	free(line);
	return (1);
}

int	checkrow(int *table, int *views)
{
	int		i;
	int		j;
	int		*line;

	line = (int *)malloc(5 * 4);
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			*(line + j) = *(table + (i * 5) + j);
			j++;
		}
		if (!checkline(line, *(views + i + 10), 0)
			|| !checkline(line, *(views + i + 15), 1))
		{
			return (0);
		}
		i++;
	}
	free(line);
	return (1);
}

int	checktable(int *table, int *views)
{
	if (!checkcol(table, views))
		return (0);
	if (!checkrow(table, views))
		return (0);
	return (1);
}
