/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:57:26 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/26 09:42:41 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

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

int	ft_strfulllen(int size, char **strs, int seplen)
{
	int		fulllen;
	int		i;

	fulllen = 0;
	i = 0;
	while (i < size - 1)
	{
		fulllen += ft_strlen(*(strs + i));
		fulllen += seplen;
		i++;
	}
	fulllen -= seplen;
	return (fulllen);
}

void	join(int size, char **strs, char *p, char *sep)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(p, *(strs + i));
		p += ft_strlen(*(strs + i));
		if (i < size - 1)
		{
			ft_strcpy(p, sep);
			p += ft_strlen(sep);
		}
		i++;
	}
	*p = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;
	char	*p;

	if (!size)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	len = ft_strfulllen(size, strs, ft_strlen(sep));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	p = str;
	join(size, strs, p, sep);
	return (str);
}
