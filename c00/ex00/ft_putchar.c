/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:40:35 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:53:06 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [v] INCLUDES [v] **************************** */

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

int	main(void)
{
	return (ft_putchar('a'), 0);
}

/*
# https://www.tutorialspoint.com/c_standard_library/c_function_putchar.htm
# https://www.tutorialspoint.com/c_standard_library/c_function_write.htm
# "man write", "man putchar", "man ascii"
*/