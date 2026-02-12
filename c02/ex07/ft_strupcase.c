/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:52:49 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 08:13:05 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	touppercase(char c)
{
	char	y;
	char	x;

	x = 'a';
	y = 'A';
	while (c >= 'a' && c <= 'z')
	{
		if (c == x)
		{
			return (y);
		}
		x++;
		y++;
	}
	return (c);
}

int	isalphabet(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (isalphabet(*(str + i)))
		{
			if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
			{
				*(str + i) = touppercase(*(str + i));
			}
		}
		i++;
	}
	return (str);
}
