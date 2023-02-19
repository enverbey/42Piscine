/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:55:20 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 17:55:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 1)
        return (1);
    else if (power == 1)
        return (nb);
    else if (power > 1)
        return (nb * ft_recursive_power(nb , power - 1));
}