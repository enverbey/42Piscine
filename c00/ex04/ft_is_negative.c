/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:59:38 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:53:51 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [v] INCLUDES [v] **************************** */

void	ft_is_negative(int n)
{
	if ((n >> 31) & 1)
		write(1, "N", sizeof(char));
	else
		write(1, "P", sizeof(char));
}

int	main(void)
{
	ft_is_negative(-4);
	write(1, "\n", sizeof(char));
	ft_is_negative(4);
	return (0);
}
