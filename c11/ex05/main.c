/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:10:16 by mohhusse          #+#    #+#             */
/*   Updated: 2024/05/06 12:58:31 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		errorhandler(int nb, char op);

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (ft_strcmp(av[2], "+") == 0)
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (ft_strcmp(av[2], "-") == 0)
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (ft_strcmp(av[2], "*") == 0)
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (ft_strcmp(av[2], "/") == 0)
	{
		if (errorhandler(ft_atoi(av[3]), av[2][0]) == 1)
			ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	}
	else if (ft_strcmp(av[2], "%") == 0)
	{
		if (errorhandler(ft_atoi(av[3]), av[2][0]) == 1)
			ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
