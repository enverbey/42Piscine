/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:08:52 by envyilma          #+#    #+#             */
/*   Updated: 2022/08/28 12:08:56 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabe;

	alfabe = 'a';
	while (alfabe <= 'z')
	{
		write(1, &alfabe, 1);
		alfabe++;
	}
}
