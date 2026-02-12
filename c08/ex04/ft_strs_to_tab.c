/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:33:17 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/30 10:56:52 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					len;
	struct s_stock_str	*arr;

	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		arr[i].size = len;
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
