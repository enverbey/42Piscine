/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2024/07/31 23:59:58 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <unistd.h> /*
#ssize_t write(int __fd, const void *__buf, size_t __nbyte)
#        */
/* **************************** [v] INCLUDES [v] **************************** */

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_putout(int n, int *arr, int flag)
{
	int	i;

	if (flag == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
}

void	ft_print_comb_increment(int n, int *arr)
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (arr[i--] == max--)
		;
	arr[i++] += 1;
	while (i++ < n)
		arr[i] = arr[i - 1] + 1;
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < n)
		arr[i] = i;
	ft_putout(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
			arr[n - 1] += 1;
		else
			ft_print_comb_increment(n, arr);
		ft_putout(n, arr, 1);
	}
}

int	main(void)
{
	ft_print_combn(3);
}
