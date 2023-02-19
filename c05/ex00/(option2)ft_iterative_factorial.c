/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   (option2)ft_iterative_factorial.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:17:04 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 17:17:04 by marvin           ###   ########.fr       */
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