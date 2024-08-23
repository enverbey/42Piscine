/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [^] INCLUDES [^] **************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

void    ft_putnbr_works(int nbr, char *base, int len_b)
{
    if (nbr / len_b != 0) 
    {
        ft_putnbr_works(nbr / len_b , base, len_b);
    }
    write(1, &base[nbr % len_b], 1);
}

int	ft_control(char *str)
{
	int	i;
	int	j;
	int	x;
	
	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int len_b;
    int key;

    key = ft_control(base);
    len_b = ft_strlen(base);
    if (key == 1)
    {
        ft_putnbr_works(nbr, base, len_b);  
    }
   
}
/*
int main(void) {
    char base[] = "0123456789ABCDEF";
    int nbr = 42;
    ft_putnbr_base(nbr, base);
    return 0;
}
*/