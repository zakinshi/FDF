/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:07:34 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:07:05 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char<ascii> to int
static int	checker_num(const char *str, int i, int sign)
{
	size_t	result;

	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = str[i] - 48 + result * 10;
		if (result >= 9223372036854775807)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	result = checker_num(str, i, sign);
	return (result * sign);
}
