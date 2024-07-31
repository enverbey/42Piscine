/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:05:40 by envyilma          #+#    #+#             */
/*   Updated: 2024/08/01 00:19:23 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 3;
	y = 6;
	a = &x;
	b = &y;
	printf("/* ************** [v] BEFORE [v] ************** *\\>\n");
	printf("|* Value  of a : %d\n", *a);
	printf("|* Value  of b : %d\n", *b);
	printf("\\* ************** [^] BEFORE [^] ************** */>\n");
	ft_swap(a, b);
	printf("/* ************** [v] AFTER  [v] ************** *\\>\n");
	printf("|* Value  of a : %d\n", *a);
	printf("|* Value  of b : %d\n", *b);
	printf("\\* ************** [^] AFTER  [^] ************** */>\n");
	return (0);
}
