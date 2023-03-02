/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:58:56 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:04:02 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int to char <ascii>
static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	*inchar(char *nstr, int n, int len)
{
	int	countdown;

	countdown = len;
	if (n == 0)
		nstr[--countdown] = '0';
	while (n > 0)
	{
		nstr[--countdown] = (n % 10) + 48;
		n /= 10;
	}
	nstr[len] = '\0';
	return (nstr);
}

char	*ft_itoa(int n)
{
	char	*minint;
	char	*nstr;
	int		len;

	minint = "-2147483648";
	if (n == -2147483648)
		return (ft_strdup(minint));
	len = intlen(n);
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (NULL);
	if (n < 0)
	{
		nstr[len - len] = '-';
		n *= -1;
	}
	inchar(nstr, n, len);
	return (nstr);
}
