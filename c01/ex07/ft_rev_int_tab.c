/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:25:11 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 05:33:23 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	key;
	int	tmp;
	int	i;

	i = 0;
	key = size / 2;
	while (key > 0)
	{
		key = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = key;
		size--;
		i++;
		key--;
	}
}
/*
#include <stdio.h>
int		main (void)
{
	int tab[] = {1, 2, 3, 4};

	ft_rev_int_tab(tab, 4);
	printf("%d,  %d,  %d,  %d ", tab[0], tab[1], tab[2], tab[3]);
}
*/