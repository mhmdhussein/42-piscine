/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:13:37 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/24 09:49:17 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == '\0')
			return (0);
	return (*s1 - *(s2 - 1));
}

void	bubblesort(char **arr, int n)
{
	int		i;
	int		j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (ft_strcmp(*(arr + j), *(arr + j + 1)) > 0)
			{
				swap((arr + j), (arr + j + 1));
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	newline;

	if (argc < 2)
	{
		return (0);
	}
	newline = '\n';
	bubblesort(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(*(argv + i));
		write(1, &newline, 1);
		i++;
	}
	return (0);
}
