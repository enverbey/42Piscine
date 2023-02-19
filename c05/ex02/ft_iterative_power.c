/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:51:23 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 17:51:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;

    result = nb;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 1)
    {
        result *= nb;
        power--;
    }
    return (result);
}