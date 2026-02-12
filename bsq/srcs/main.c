/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:33:50 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:40:57 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

int	for_main(t_matrix *m, int *i)
{
	if ((m->rows == 1) && (m->cols == 1) && m->map[0][0] == m->obs)
	{
		write(1, "map error\n", 10);
		(*i)++;
		return (1);
	}
	return (0);
}

int	for_main2(t_matrix *m, int *i)
{
	if (full_obs(m))
	{
		print_matrix(m);
		write(1, "\n", 1);
		(*i)++;
		return (1);
	}
	return (0);
}

void	mainwithnoargument(void)
{
	int				i;
	t_matrix		size;
	char			**map;
	t_matrix		*m;

	ft_file();
	i = 0;
	map_parser("temp", &map, &size);
	m = creatematrix(map);
	if (check_and_nbrow(map[0]) && check_map(map))
	{
		if (for_main(m, &i) || for_main2(m, &i))
			return ;
		will_place_square(m, solve_rec(m, 0, m->cols));
		print_matrix(m);
	}
	else
		write(1, "map error", 9);
	write(1, "\n", 1);
	i++;
}

void	mainwithmultipleargument(char **argv, int argc)
{
	int			i;
	t_matrix	size;
	t_matrix	*m;
	char		**map;

	i = 1;
	while (i < argc)
	{
		map_parser(argv[i], &map, &size);
		m = creatematrix(map);
		if (check_and_nbrow(map[0]) && check_map(map))
		{
			if (for_main(m, &i) || for_main2(m, &i))
				continue ;
			will_place_square(m, solve_rec(m, 0, m->cols));
			print_matrix(m);
		}
		else
			write(1, "map error", 9);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		mainwithnoargument();
	if (argc >= 2)
		mainwithmultipleargument(argv, argc);
}
