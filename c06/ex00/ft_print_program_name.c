/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:48:12 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/25 13:58:39 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*c;
	char	newline;

	(void)argc;
	c = *(argv);
	newline = '\n';
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
	write(1, &newline, 1);
	return (0);
}
