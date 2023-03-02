/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:20:48 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:00:19 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Find c in s at n bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*(s1 + i) == c1)
			return ((s1 + i));
		i++;
	}
	return (0);
}
