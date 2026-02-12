/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:08:40 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/24 09:48:28 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*c;
	char	newline;

	if (argc < 2)
	{
		return (0);
	}
	newline = '\n';
	i = argc - 1;
	while (i > 0)
	{
		c = *(argv + i);
		while (*c)
		{
			write(1, c, 1);
			c++;
		}
		write(1, &newline, 1);
		i--;
	}
	return (0);
}
