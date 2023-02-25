/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:05:40 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 05:10:00 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main()
{
	int x = 3;
	int y = 6;
	int *a = &x;
	int *b = &y;

	printf("%u   ,   %u \n", *a, *b);
	ft_swap(a, b);
	printf("%u   ,   %u \n", *a, *b);
	return (0);
}
*/