/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:46:36 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 01:55:16 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp;

	alp = 122;
	while (alp >= 97)
	{
		write(1, &alp, 1);
		alp--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
a nın ascii degeri 97
z ise 122 dir
ascii degeri ile eşitmele yaparken a = 97 şeklinde
char tipinde eşitmele içinde tek tırnak kullanılır.
char tmp = 97;
char tmp = 'a';
*/