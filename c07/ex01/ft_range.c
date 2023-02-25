/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
    int *p;
    int i;

    i = 0;
    if (min >= max)
    {
        p = 0;
        return (p);
    }
    p = (int *) malloc (sizeof(int) * (max - min));
    if(!p)
        return (0);
    while(max > min + i)
    {
        p[i] = min + i;
        i++;
    }
    return (p);
}