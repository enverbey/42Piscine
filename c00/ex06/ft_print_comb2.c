/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:12:18 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:47:29 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 00;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			write(1, &("0123456789")[x / 10], sizeof(char));
			write(1, &("0123456789")[x % 10], sizeof(char));
			write(1, " ", sizeof(char));
			write(1, &("0123456789")[y / 10], sizeof(char));
			write(1, &("0123456789")[y % 10], sizeof(char));
			if (x != 98)
				write(1, ", ", sizeof(char) * 2);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
