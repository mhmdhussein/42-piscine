/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhusse <mohhusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:29:21 by mohhusse          #+#    #+#             */
/*   Updated: 2024/04/23 08:56:11 by mohhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putcharles(char c)
{
	write(1, &c, 1);
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

int	checkbase(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) <= 1 || *(base) == '\0')
		return (0);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-' || *(base + i) <= ' ')
		{
			return (0);
		}
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (*(base + i) == *(base + j))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (!checkbase(base) || !(*(base)))
	{
		return ;
	}
	if (nb < 0)
	{
		putcharles('-');
		nb *= -1;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
	else
	{
		write(1, (base + nb), 1);
	}
}
