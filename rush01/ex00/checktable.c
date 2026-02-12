/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:56 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/27 18:36:25 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkline(int *line, int viewnb, int reverse);

int	checkcol(int *table, int *views)
{
	int		i;
	int		j;
	int		*line;

	line = (int *)malloc(4 * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			*(line + j) = *(table + (j * 4) + i);
			j++;
		}
		if (!checkline(line, *(views + i), 0)
			|| !checkline(line, *(views + i + 4), 1))
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

	line = (int *)malloc(4 * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			*(line + j) = *(table + (i * 4) + j);
			j++;
		}
		if (!checkline(line, *(views + i + 8), 0)
			|| !checkline(line, *(views + i + 12), 1))
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
