/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:30:30 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/27 13:53:13 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkline(int *line, int viewnb, int reverse)
{
	int	count;
	int	max;
	int	i;
	int	j;

	i = 0;
	count = 0;
	max = 0;
	while (i < 4)
	{
		if (reverse == 1)
			j = 3 - i;
		else
			j = i;
		if (*(line + j) > max)
		{
			max = *(line + j);
			count++;
		}
		i++;
	}
	return (count == viewnb);
}
