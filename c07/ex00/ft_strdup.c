/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:32:24 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/25 17:36:40 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (*(src + len))
	{
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	p = str;
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (str);
}
