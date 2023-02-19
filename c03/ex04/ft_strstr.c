/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:02:24 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 00:02:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* *******************[******************************************************* */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int k;

    if (to_find[0] == '\0')
        return (str);
    i = 0;
    while (str[i])
    {
        k = 0;
        while (str[i + k] == to_find[k])
            k++;
        if (to_find[k] == '\0')
            return (str + i);
        i++;
    }
    return (0);
}