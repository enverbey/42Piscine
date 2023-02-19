/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:41:27 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 01:54:57 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	tmp;

	tmp = 'a';
	while (tmp <= 'z')
	{
		write(1, &tmp, 1);
		tmp++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/