/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:22:36 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 05:24:51 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	len;

	len = ft_strlen("rıewgfıulqeof");
	printf("%d", len);
}
*/