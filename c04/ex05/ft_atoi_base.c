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

int ft_atoi_base(const char *str, int str_base) 
{
    int result = 0;
    int sign = 1;
    const char *p = str;
    while (*p == ' ' || (*p >= '\t' && *p <= '\r')) {
        p++;
    }
    if (*p == '+' || *p == '-') {
        sign = (*p == '-') ? -1 : 1;
        p++;
    }
    while (*p) {
        int digit;
        if (*p >= '0' && *p <= '9') {
            digit = *p - '0';
        } else if (*p >= 'A' && *p <= 'Z') {
            digit = *p - 'A' + 10;
        } else if (*p >= 'a' && *p <= 'z') {
            digit = *p - 'a' + 10;
        } else {
            break;
        }
        if (digit >= str_base) {
            break;
        }
        result = result * str_base + digit;
        p++;
    }
    return sign * result;
}
/*
#include <stdio.h>
int main() {
    const char *str = "101011";
    int str_base = 2;
    int result = ft_atoi_base(str, str_base);
    printf("%s in base %d = %d in base 10\n", str, str_base, result);
    return 0;
}
*/