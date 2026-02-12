/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:32:15 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:37:44 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

int	check_and_nbrow(char *str)
{
	int	i;
	int	num;
	int	len;

	i = 0;
	num = 0;
	len = line_size(str);
	if (is_printable(str) == 0 || len < 4)
		return (0);
	while (i < len - 3)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	if (notsame_check(str, len) == 0)
		return (0);
	num = atoi_for_check(str);
	return (num);
}

int	check_signs(char **strs, int n_row)
{
	int	i;
	int	j;
	int	f_line;

	i = 1;
	f_line = line_size(strs[0]);
	while (i <= n_row)
	{
		j = 0;
		while (strs[i][j] != '\0' && strs[i][j] != '\n')
		{
			if (strs[i][j] != strs[0][f_line - 2]
			&& strs[i][j] != strs[0][f_line - 3])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_map(char **strs)
{
	int	i;
	int	n;
	int	n_row;

	i = 1;
	n = line_size(strs[1]);
	n_row = check_and_nbrow(strs[0]);
	if (n_row == 0)
		return (0);
	while (i <= n_row)
	{
		if (line_size(strs[i]) != n)
			return (0);
		i++;
	}
	if (check_signs(strs, n_row) == 0)
		return (0);
	return (1);
}

t_matrix	*creatematrix(char **strs)
{
	t_matrix	*m;

	m = (t_matrix *)malloc(sizeof(t_matrix));
	if (m == NULL)
	{
		return (NULL);
	}
	m->map = strs + 1;
	m->cols = line_size(*(strs + 1));
	m->rows = check_and_nbrow(*(strs));
	m->empty = strs[0][line_size(strs[0]) - 3];
	m->obs = strs[0][line_size(strs[0]) - 2];
	m->fill = strs[0][line_size(strs[0]) - 1];
	return (m);
}

int	info_line_size(char *file_path)
{
	int		fd;
	char	c;
	int		i;

	i = 0;
	fd = open(file_path, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
		{
			close(fd);
			return (i);
		}
		i++;
	}
	close(fd);
	return (-1);
}
