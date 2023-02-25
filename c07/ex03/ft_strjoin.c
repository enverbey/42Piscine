/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *tmp)
{
    int i;

    i = 0;
    while(tmp[i])
        i++;
    return (i);
}

int     ft_length_strs(int size, char **strs)
{
    int i;
    int j;
    int total;

    i = 0;
    total = 0;
    while (size >= 1)
    {
        j = 0;
        while (strs[i][j])
            j++;
        i++;
        size--;
        total += j;
    }
    return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int k;
    int len_sep;
    int len_strs;
    char *tmp;

    if (size > 1)
        len_sep = (size - 1) * ft_strlen(sep);
    else
        len_sep = 0;
    len_strs = ft_length_strs(size, strs);
    tmp = (char *) malloc(sizeof(char) * (len_sep + len_strs + 1));
    i = 0;
    k = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            tmp[k] = strs[i][j];
            j++;
            k++;
        }
        j = 0;
        while (sep[j] && i < size -1)
        {
            tmp[k] = sep[j];
            k++;
            j++;
        }
        i++;
    }
    tmp[k] = '\0';
    return (tmp);
}
/*
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "aaaa";
	strs[1] = "bbbb";
	strs[2] = "cccc";
	separator = "enver";
	result = ft_strjoin(3, strs, separator);
	printf("%s\n", result);
	free(result);
}
*/