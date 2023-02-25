/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:58:17 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/18 07:39:41 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	key;

	i = 0;
	key = 0;
	while (str[i])
	{
		if (key == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else if (key == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			key = 0;
		else
			key = 1;
		i++;
	}
	return (str);
}
