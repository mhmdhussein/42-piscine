/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:48:11 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/08 18:33:32 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (tab[i] != 0 && check == 0)
	{
		if ((*f)(tab[i]))
		{
			check = 1;
		}
		i++;
	}
	return (check);
}
