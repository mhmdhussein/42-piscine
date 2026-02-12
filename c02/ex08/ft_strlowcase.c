/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:04:45 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 08:12:52 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	tolowercase(char c)
{
	char	y;
	char	x;

	x = 'A';
	y = 'a';
	while (c >= 'A' && c <= 'Z')
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (isalphabet(*(str + i)))
		{
			if ((*(str + i) >= 'A' && *(str + i) <= 'Z'))
			{
				*(str + i) = tolowercase(*(str + i));
			}
		}
		i++;
	}
	return (str);
}
