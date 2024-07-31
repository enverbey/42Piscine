/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:25:11 by envyilma          #+#    #+#             */
/*   Updated: 2024/08/01 00:32:50 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i, i < (size / 2))
		ft_swap(&tab[i], &tab[size - 1 - i]);
}
/*
int		main (void)
{
	int tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, 5);
	printf("%d,  %d,  %d,  %d,  %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/
