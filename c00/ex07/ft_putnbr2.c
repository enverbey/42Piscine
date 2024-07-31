/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:54:28 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [v] INCLUDES [v] **************************** */

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
		write(1, "-", sizeof(char));
		ft_putnbr(-nb);
	}
	while (nb >= 10)
	{
		tmp[i++] = nb % 10;
		nb = nb / 10;
	}
	tmp[i] = nb % 10;
	while (i >= 0)
		write(1, &("0123456789")[tmp[i--] % 10], sizeof(char));
}

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
	write(1, "\n", 1);
}
//:D Kolay gelsin