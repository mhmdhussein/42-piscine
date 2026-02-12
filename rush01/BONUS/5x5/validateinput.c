/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:12:25 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/28 13:03:06 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validateinput(char *inp)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (*(inp + i) != '\0')
	{
		if (*(inp + i) >= '1' && *(inp + i) <= '5')
		{
			count++;
			if (*(inp + i + 1) != ' ' && *(inp + i + 1) != '\0')
				return (0);
			if (*(inp + i + 1) == ' ')
				i++;
		}
		else
			return (0);
		i++;
	}
	if (count == 20)
		return (1);
	else
		return (0);
}
