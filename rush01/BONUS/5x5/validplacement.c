/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validplacement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:09:27 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/28 13:02:26 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validplacement(int *table, int pos, int n)
{
	int		row;
	int		col;
	int		i;

	i = 0;
	row = pos / 5;
	col = pos % 5;
	while (i < 5)
	{
		if (*(table + (row * 5) + i) == n || *(table + (i * 5) + col) == n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
