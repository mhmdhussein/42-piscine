/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:45:57 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/20 17:20:28 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	length(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len1;
	unsigned int	i;

	len1 = length(dest);
	i = 0;
	while (i < nb && *(src + i) != '\0')
	{
		*(dest + len1 + i) = *(src + i);
		i++;
	}
	*(dest + len1 + i) = '\0';
	return (dest);
}
