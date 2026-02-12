/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:08:46 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:19:37 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_matrix {
	char	**map;
	int		cols;
	int		rows;
	char	empty;
	char	obs;
	char	fill;
}	t_matrix;

char		*ft_strcpy(char *dest, char *src);
int			line_size(char *str);
int			is_printable(char *str);
int			atoi_for_check(char *str);
int			notsame_check(char *str, int len);
int			check_and_nbrow(char *str);
int			check_signs(char **strs, int n_row);
int			check_map(char **strs);
t_matrix	*creatematrix(char **strs);
int			info_line_size(char *file_path);
char		*info_line_get(char *file_path);
int			get_col(char *file_path);
char		*add_character(char *str, char c);
char		*line_parser(char *file_path, int row);
int			map_parser(char *file_path, char ***map, t_matrix *size);
int			check_square(t_matrix *m, int i, int j, int k);
void		fill_largest_square(t_matrix *m, int k,
				int row_start, int col_start);
int			will_place_square(t_matrix *m, int k);
int			can_fit(t_matrix *mat, int size, int width, int height);
int			solve_rec(t_matrix *mat, int start, int end);
void		free_file_contents(char **file_contents);
void		free_matrix(t_matrix *matrix);
void		print_matrix(t_matrix *mat);
int			full_obs(t_matrix *map);
void		ft_file(void);
void		mainwithnoargument(void);
void		mainwithmultipleargument(char **argv, int argc);
int			for_main2(t_matrix *m, int *i);
int			for_main(t_matrix *m, int *i);
#endif