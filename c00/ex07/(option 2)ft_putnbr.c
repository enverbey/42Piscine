/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	tmp[12];
	int	key;
	int	i;

	i = 0;
	key = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		key = 1;
	}
	else if (nb < 0 && key != 1)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	while (nb >= 10)
	{
		tmp[i++] = nb % 10;
		nb = nb / 10;
	}
	tmp[i] = nb % 10;
	while (i >= 0)
		write(1, &("0123456789")[tmp[i--] % 10], 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(15513);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(5151365);
	write(1, "\n", 1);
	ft_putnbr(42);
	//:D Kolay gelsin
}
*/