/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:23:37 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 18:42:18 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*findstr(char *str, char *to_find)
{
	char	*s;

	s = str;
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
			return (NULL);
		str++;
		to_find++;
	}
	if (*to_find == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;

	a = str;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		a = findstr(str, to_find);
		if (a != NULL)
			return (a);
		str++;
	}
	return (NULL);
}
