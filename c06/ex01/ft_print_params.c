/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:58:32 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/24 09:47:57 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*c;
	int		i;
	char	newline;

	if (argc < 2)
	{
		return (0);
	}
	newline = '\n';
	i = 1;
	while (*(argv + i) != NULL)
	{
		c = *(argv + i);
		while (*c)
		{
			write(1, c, 1);
			c++;
		}
		write(1, &newline, 1);
		i++;
	}
	return (0);
}
