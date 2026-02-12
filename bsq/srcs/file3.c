/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:32:49 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:37:42 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

char	*info_line_get(char *file_path)
{
	int		fd;
	char	*inf;
	int		inf_size;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	inf_size = info_line_size(file_path);
	inf = (char *)malloc(sizeof(char) * inf_size + 1);
	inf[inf_size] = '\0';
	read(fd, inf, inf_size);
	close (fd);
	return (inf);
}

int	get_col(char *file_path)
{
	int		fd;
	char	c;
	int		count;

	fd = open(file_path, O_RDONLY);
	count = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			break ;
		}
	}
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		count++;
	}
	close(fd);
	return (count);
}

char	*add_character(char *str, char c)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = (char *)malloc (sizeof(char) * (line_size(str) +2));
	if (!str2)
		return (NULL);
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	free(str);
	str2[i] = c;
	i++;
	str2[i] = '\0';
	return (str2);
}

char	*line_parser(char *file_path, int row)
{
	int		fd;
	char	buffer[1];
	char	*str;
	int		size;
	int		current_row;

	current_row = 1;
	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	fd = open(file_path, O_RDONLY);
	while (current_row <= row)
	{
		while (read(fd, buffer, 1) > 0 && buffer[0] != '\n')
		{
		}
		current_row++;
	}
	size = read(fd, buffer, 1);
	while (size > 0 && buffer[0] != '\n')
	{
		str = add_character(str, buffer[0]);
		size = read(fd, buffer, 1);
	}
	return (str);
}

int	map_parser(char *file_path, char ***map, t_matrix *size)
{
	char	*inf;
	int		i;	

	i = 1;
	inf = info_line_get(file_path);
	(*size).rows = check_and_nbrow(inf);
	*map = (char **)malloc(sizeof(char *) * ((*size).rows + 1));
	(*map)[0] = inf;
	(*size).cols = get_col(file_path);
	while (i <= (*size).rows)
	{
		(*map)[i] = line_parser(file_path, i);
		i++;
	}
	(*map)[(*size).rows + 1] = NULL;
	return (0);
}
