/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:33:11 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:37:57 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

int	check_square(t_matrix *m, int i, int j, int k)
{
	int	a;
	int	b;

	a = i;
	b = j;
	while (a < i + k)
	{
		b = j;
		while (b < j + k)
		{
			if (m->map[a][b] == m->obs)
			{
				return (0);
			}
			b++;
		}
		a++;
	}
	return (1);
}

void	fill_largest_square(t_matrix *m, int k, int row_start, int col_start)
{
	int	i;
	int	j;

	i = row_start;
	while (i < row_start + k)
	{
		j = col_start;
		while (j < col_start + k)
		{
			m->map[i][j] = m->fill;
			j++;
		}
		i++;
	}
}

int	will_place_square(t_matrix *m, int k)
{
	int	i;
	int	j;

	i = 0;
	while (i + k <= m->rows)
	{
		j = 0;
		while (j + k <= m->cols)
		{
			if (m->map[i][j] == m->empty)
			{
				if (check_square(m, i, j, k))
				{
					fill_largest_square(m, k, i, j);
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	can_fit(t_matrix *mat, int size, int width, int height)
{
	int		i;
	int		j;

	i = 0;
	while (i <= height - size)
	{
		j = 0;
		while (j <= width - size)
		{
			if (check_square(mat, i, j, size))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	solve_rec(t_matrix *mat, int start, int end)
{
	int		mid;
	int		width;
	int		height;	

	mid = (start + end) / 2;
	width = mat->cols;
	height = mat->rows;
	if (can_fit(mat, mid, width, height) == 1
		&& can_fit(mat, mid + 1, width, height) == 0)
		return (mid);
	if (can_fit(mat, mid, width, height) == 1)
		return (solve_rec(mat, mid + 1, end));
	else
		return (solve_rec(mat, start, mid - 1));
}
