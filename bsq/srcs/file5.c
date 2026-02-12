/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:33:26 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:38:14 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

void	free_file_contents(char **file_contents)
{
	int		i;

	if (file_contents == NULL)
		return ;
	i = 0;
	while (file_contents[i] != NULL)
	{
		free(file_contents[i]);
		i++;
	}	
	free(file_contents);
}

void	free_matrix(t_matrix *matrix)
{
	int		i;

	if (matrix == NULL)
		return ;
	i = 0;
	while (i < matrix->rows)
	{
		free(matrix->map[i]);
		i++;
	}	
	free(matrix->map);
	free(matrix);
}

void	print_matrix(t_matrix *mat)
{
	int	i;
	int	j;

	i = 0;
	while (i < mat->rows)
	{
		j = 0;
		while (j < mat->cols)
		{
			write(1, &mat->map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	full_obs(t_matrix *map)
{
	int		i;
	int		j;
	char	**tmap;

	tmap = map->map;
	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if (tmap[i][j] != map->obs)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buff[10000];

	fd = open("temp", O_CREAT | O_RDWR | O_TRUNC);
	r = read(0, buff, 10000);
	while (r > 0)
	{
		write(fd, buff, r);
		r = read(0, buff, 10000);
	}
	close(fd);
}
