/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:45:15 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/12 20:45:51 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//fonct* locates the last occurrence of c in str point* 2 by s
char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	c1;
	char	*s1;

	l = ft_strlen(s);
	c1 = (char)c;
	s1 = (char *)s;
	while (0 <= l)
	{
		if (s1[l] == c1)
			return (s1 + l);
		l--;
	}
	return (NULL);
}
