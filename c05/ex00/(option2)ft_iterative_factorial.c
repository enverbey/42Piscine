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

int ft_iterative_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb < 1)
        return (1);
    else if (nb > 1)
    {
        return(nb * ft_iterative_factorial(nb - 1));
    }
}