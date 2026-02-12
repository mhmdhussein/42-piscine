/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:18:09 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 12:28:28 by mohhusse         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capnext;

	i = 0;
	capnext = 1;
	while (*(str + i) != '\0')
	{
		if (isalphabet(*(str + i)))
		{
			if (capnext)
			{
				*(str + i) = touppercase(*(str + i));
				capnext = 0;
			}
			else
			{
				*(str + i) = tolowercase(*(str + i));
			}
		}
		else if (*(str + i) == ' ')
			capnext = 1;
		i++;
	}
	return (str);
}
