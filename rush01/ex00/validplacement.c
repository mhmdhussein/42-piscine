/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validplacement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:09:27 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/27 18:42:50 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validplacement(int *table, int pos, int n)
{
	int		row;
	int		col;
	int		i;

	i = 0;
	row = pos / 4;
	col = pos % 4;
	while (i < 4)
	{
		if (*(table + (row * 4) + i) == n || *(table + (i * 4) + col) == n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
