/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:52:48 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/28 13:02:23 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		validplacement(int *table, int pos, int n);
int		checkline(int *line, int viewnb, int reverse);
int		checkcol(int *table, int *views);
int		checkrow(int *table, int *views);
int		checktable(int *table, int *views);

int	solve(int *table, int pos, int *views)
{
	int		num;

	if (pos == 25)
	{
		return (checktable(table, views));
	}
	num = 1;
	while (num <= 5)
	{
		if (validplacement(table, pos, num))
		{
			*(table + pos) = num;
			if (solve(table, pos + 1, views))
				return (1);
		}
		*(table + pos) = 0;
		num++;
	}
	return (0);
}
