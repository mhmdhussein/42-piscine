/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:05:28 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/02 09:46:46 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_countwords(char *str, char *charset)
{
	int	count;
	int	word;

	count = 0;
	while (*str)
	{
		if (!ft_is_sep(*str, charset))
		{
			if (!word)
			{
				count++;
				word = 1;
			}
			else
				word = 0;
		}
		str++;
	}
	return (count);
}

char	*ft_copy(char *str, char *charset)
{
	int		len;
	char	*start;
	char	*word;
	int		i;

	len = 0;
	start = str;
	while (*str && !ft_is_sep(*str, charset))
	{
		len++;
		str++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(word + i) = *(start + i);
		i++;
	}
	*(word + len) = '\0';
	return (word);
}

char	**ft_split2(char *str, char *charset, char **result, int *i)
{
	while (*str)
	{
		if (!ft_is_sep(*str, charset))
		{
			*(result + (*i)) = ft_copy(str, charset);
			if (!*(result + (*i)))
			{
				return (NULL);
			}
			(*i)++;
			while (*str && !ft_is_sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	*(result + (*i)) = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		wordcount;
	char	**result;
	int		i;

	wordcount = ft_countwords(str, charset);
	result = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	return (ft_split2(str, charset, result, &i));
}
