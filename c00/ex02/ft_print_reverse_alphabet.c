/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:46:36 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:53:38 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_print_reverse_alphabet(void)
{
	char	character;

	character = 'z';
	while (character >= 'a' && write(1, &character, sizeof(char)))
		character += -1;
}

int	main(void)
{
	return (ft_print_reverse_alphabet(), 0);
}
