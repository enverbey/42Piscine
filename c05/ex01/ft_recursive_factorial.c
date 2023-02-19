/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:22:09 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 17:22:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
    int result;

    result = 1;
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (1);
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    return (result);
}