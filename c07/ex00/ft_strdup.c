/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    char *d;
    int size;
    int i;

    i = 0;
    size = 0;
    while (src[size])
        size++;
    d = (dest =(char *) malloc(size * sizeof(char) + 1));
    if(!d || !dest)
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);   
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strdup("Future is past"));
}
*/
/*
dest ile kopyalama yaptık peki niye 
d yi kullandık ve aynı yeri işaretledik ?
Arkadaşlar siz dest ile işlem yaparken 
başlangıç noktasını kaybedebilirsiniz 
bu durumda 0. index'i bulmak için d yi kullanabilirsiniz.
char *d sizi bir nevi depolama gibi düşünülebilir
eğer başlangıç noktasını kaybederseniz d'yi kullanarak
ulaşabilirsiniz.
*/