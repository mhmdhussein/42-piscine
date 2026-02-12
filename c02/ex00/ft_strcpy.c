/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:24:04 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 12:09:41 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (original_dest);
}
