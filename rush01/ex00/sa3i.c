/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa3i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:26:47 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/27 18:42:22 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkline(int *line, int viewnb, int reverse);
int		checkcol(int *table, int *views);
int		checkrow(int *table, int *views);
int		checktable(int *table, int *views);
int		solve(int *table, int pos, int *views);
int		validplacement(int *table, int pos, int n);
void	printtable(int *table);

void	sa3i(int *table, int *views)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		*(table + i) = 0;
		i++;
	}
	if (solve(table, 0, views))
		printtable(table);
	else
		write(1, "Error\n", 6);
}
