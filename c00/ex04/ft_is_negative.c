/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:59:38 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 02:02:55 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n > 0)
		write(1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(-4);
	write(1, "\n", 1);
	ft_is_negative(4);
	return (0);
}
*/