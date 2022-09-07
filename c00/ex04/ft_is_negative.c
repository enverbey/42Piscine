/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:43:17 by envyilma          #+#    #+#             */
/*   Updated: 2022/08/25 11:43:17 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &pozitif, 1);
	}
}
