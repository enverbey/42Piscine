/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:38:57 by envyilma          #+#    #+#             */
/*   Updated: 2022/08/28 12:38:57 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar ((x / 10) + '0');
			ft_putchar ((x % 10) + '0');
			write (1, " ", 1);
			ft_putchar ((y / 10) + '0');
			ft_putchar ((y % 10) + '0');
			if (x != 98 || y != 99)
			{
				write (1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
