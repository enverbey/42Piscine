/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
    int *tmp;
    int *d;
    int i;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    d = (tmp = (int *) malloc(sizeof(int) * (max - min)));
    if (!d)
    {
        *range = 0;
        return(-1);
    }
    *range = tmp;
    i = 0;
    while (min < max)
    {
        tmp[i] = min + i;
        i++;
    }
    return (max - min);
}