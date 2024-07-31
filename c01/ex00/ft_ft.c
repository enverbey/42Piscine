/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:58:45 by envyilma          #+#    #+#             */
/*   Updated: 2024/08/01 00:18:30 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_ft(int *nbr)
{
	printf("/* ************** [v] INSIDE [v] ************** *\\>\n");
	printf("|* Value  of number : %d\n", *nbr);
	printf("|* Adress of number : %p\n", nbr);
	printf("|* Adress of pointer: %p {DİFFERENT!!}\n", &nbr);
	printf("\\* ************** [^] INSIDE [^] ************** */>\n");
	*nbr = 42;
}

int	main(void)
{
	int	nbr;

	nbr = 23;
	printf("/* ************** [v] BEFORE [v] ************** *\\>\n");
	printf("|* Value  of number : %d\n", nbr);
	printf("|* Adress of number : %p\n", &nbr);
	printf("\\* ************** [^] BEFORE [^] ************** */>\n");
	ft_ft(&nbr);
	printf("/* ************** [v] AFTER  [v] ************** *\\>\n");
	printf("|* Value  of number : %d\n", nbr);
	printf("|* Adress of number : %p\n", &nbr);
	printf("\\* ************** [^] AFTER  [^] ************** */>\n");
	return (0);
}
//Look at their addresses. 
//They are the same. This is because the pointer is passed by value.