/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:14:00 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 05:18:09 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int		main(void)
{
	int i = 10;
	int j = 6;
	int *a = &i;
	int *b = &j;

	printf("%d / %d \n",i, j);

	ft_ultimate_div_mod(a, b);

	printf("%d\n",*a);
	printf("%d",*b);
}
*/