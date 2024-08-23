/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
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

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    i = 0;
    while (argv[j][i] && j < argc)
    {
        while (argv[j][i])
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
        i = 0;
    }
    return (0);
}