/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:15:58 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/28 10:07:04 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	fillview(int *view, char *inp);
int		validateinput(char *inp);
int		checkline(int *line, int viewnb, int reverse);
int		checkcol(int *table, int *views);
int		checkrow(int *table, int *views);
int		checktable(int *table, int *views);
int		solve(int *table, int pos, int *views);
int		validplacement(int *table, int pos, int n);
void	printtable(int *table);
void	sa3i(int *table, int *views);

int	main(int argc, char **argv)
{
	int		*views;
	int		*table;
	char	*inp;

	if (argc != 2 || !validateinput(*(argv + 1)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = (int *)malloc(16 * 4);
	table = (int *)malloc(16 * 4);
	if (!views || !table)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	inp = *(argv + 1);
	fillview(views, inp);
	sa3i(table, views);
	free(views);
	free(table);
	return (0);
}
