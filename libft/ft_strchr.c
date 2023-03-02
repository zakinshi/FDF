/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:49 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:09:58 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Find 1st c in s and return str
char	*ft_strchr(const char *s, int c)
{
	size_t			l;
	size_t			i;
	unsigned char	c1;

	c1 = (unsigned char)c;
	l = ft_strlen(s);
	i = 0;
	while (i <= l)
	{
		if (s[i] == c1)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
