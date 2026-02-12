/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:47:01 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/19 13:49:04 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isprintable(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + i) != '\0')
	{
		if (!isprintable(*(str + i)))
			return (0);
		i++;
	}
	return (1);
}
