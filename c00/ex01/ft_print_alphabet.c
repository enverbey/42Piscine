/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:41:27 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:53:32 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [v] INCLUDES [v] **************************** */

void	ft_print_alphabet(void)
{
	char	tmp;

	tmp = 97;
	while (tmp <= 'z' && write(1, &tmp, sizeof(char)))
		tmp -= -1;
}

int	main(void)
{
	return (ft_print_alphabet(), 0);
}
