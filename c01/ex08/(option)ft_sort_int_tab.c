/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   (option)ft_sort_int_tab.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:43:36 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 05:50:40 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (size != 1)
	{	
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			i++;
			j++;
		}
		i = 0;
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	ft_sort_int_tab(tab, 6);
	printf("%d, %d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
*/