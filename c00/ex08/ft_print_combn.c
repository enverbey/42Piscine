/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//BİTMEDİ

#include <unistd.h>

void	ft_write(int i, int *tmp)
{
	write(1, &("0123456789")[tmp[i] % 10], 1);
}

int	enver(int *tmp, int n)
{
	int	i;
	int	x;
	int k;

	k = 1;
	i = 0;
	while(k <= n)
	{
		while (tmp[i] < n - 1)
		{
			if (tmp[i + 1] > tmp[i])
				i++;
			else
				tmp[i + 1] = tmp[i + 1] + 1;
		}
		ft_write(i, tmp);
		k++;
		i++;
	}
	i = 0;
	x = 0;
	
	/*while (x < n)
	{
		write(1, &("0123456789")[tmp[i] % 10], 1);
		i++;
		x++;
	}*/
	write(1, ", ", 1);
	return (tmp[0]);
}

void	ft_print_combn(int n)
{
	int	tmp[11];
	int	i;
	int	key;

	i = 0;
	while (i <= n)
	{
		tmp[i] = i;
		i++;
	}
	tmp[i] = 42;
	key = enver(tmp, n);
	while (key != (10 - n))
	{
		tmp[n - 1] += 1;
		key = enver(&tmp[0], n);
	}
}

int	main(void)
{
	ft_print_combn(2);
}
