/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:10:55 by Burak Ortak       #+#    #+#             */
/*   Updated: 2022/08/29 14:09:10 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb_backup;
	int		i;
	char	c[10];

	i = 0;
	nb_backup = nb;
	if (nb_backup < 0)
	{
		ft_putchar('-');
		nb_backup = -nb_backup;
	}	
	while (nb_backup != 0)
	{
		c[i] = nb_backup % 10;
		nb_backup = nb_backup / 10;
		i++;
	}
	i--;
	while (nb_backup == 0)
	{
		ft_putchar(0 + 48);
		return ;
		
	}
	while (i >= 0)
	{	
		ft_putchar(c[i] + '0');
		i--;
	}
}

int	main(void)
{
	ft_putnbr(0);
	return (0);
}
