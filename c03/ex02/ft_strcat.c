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

int ft_strlen(char *tmp)
{
    unsigned int i;

    i = 0;
    while(tmp[i])
        i++;
    return (i);
}

char *ft_strcat(char *dest, char *src)
{
    unsigned int size_s;
    unsigned int size;

    size_s = ft_strlen(dest);
    size = 0;
    while (src[size])
    {
        dest[size_s + size] = src[size];
        size++;
    }
    dest[size_s + size] = '\0';
    return(dest);
}