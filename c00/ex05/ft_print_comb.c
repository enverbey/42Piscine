/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:03:36 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:03:22 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 1;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				write(1, &("0123456789")[x % 10], sizeof(char));
				write(1, &("0123456789")[y % 10], sizeof(char));
				write(1, &("0123456789")[z % 10], sizeof(char));
				if (x != 7)
					write(1, ", ", sizeof(char) * 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
