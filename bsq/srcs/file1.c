/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:31:31 by mjoundi           #+#    #+#             */
/*   Updated: 2024/05/08 23:37:26 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/file.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	line_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_printable(char *str)
{
	int	i;
	int	s;

	i = 0;
	while (str[i] != '\0')
	{
		s = str[i];
		if (!(s >= 32 && s <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	atoi_for_check(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			return (0);
		}
	}
	while (str[i] >= '0' && str[i] <= '9' && i < line_size(str) - 3)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	notsame_check(char *str, int len)
{
	if (str[len - 1] == str[len - 2] || str[len -1] == str[len - 3])
		return (0);
	if (str[len -2] == str[len - 3])
		return (0);
	return (1);
}
