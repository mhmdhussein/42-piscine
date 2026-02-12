/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:48 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/21 15:03:52 by mohhusse         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	totallen;
	unsigned int	i;
	unsigned int	sizeleft;

	destlen = length(dest);
	srclen = length(src);
	totallen = destlen + srclen;
	if (size <= destlen)
		return (totallen);
	sizeleft = size - destlen;
	i = 0;
	while (*(src + i) != '\0' && i < sizeleft)
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}
	*(dest + destlen + i) = '\0';
	return (totallen);
}
