/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:10:49 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 11:50:26 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isnum(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + i) != '\0')
	{
		if (!isnum(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}
