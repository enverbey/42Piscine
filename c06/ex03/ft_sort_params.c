/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
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

void    ft_print_point(int size, char **tmp)
{
    int i;
    int j;

    j = 0;
    i = 1;
    while (i < size)
    {
        while(tmp[i][j])
        {
            write(1, &tmp[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }

}

void    ft_swap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp; 
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

void    ft_sort_ascii(int size, char **tmp)
{
    int i;
    int j;

    i = 1;
    while (i < size - 1)
    {
        j = i + 1;
        while(j < size)
        {
            if (ft_strcmp(tmp[i], tmp[j]) > 0)
            {
                ft_swap(&tmp[i], &tmp[j]);
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
    ft_sort_ascii(argc, argv);
    ft_print_point(argc, argv);
    }
    return (0);
}