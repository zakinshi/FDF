/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:37:33 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 15:44:39 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// func find the needle into the haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (len == 0 && !haystack)
		return (NULL);
	if (needle[i2] == '\0')
		return ((char *)(haystack));
	while (haystack[i1] != '\0' && i1 < len)
	{
		i2 = 0;
		if (haystack[i1] == needle[i2])
		{
			while (haystack[i1 + i2] == needle[i2] && (i1 + i2) < len)
			{
				i2++;
				if (!needle[i2])
					return ((char *)(haystack + i1));
			}
		}
		i1++;
	}
	return (NULL);
}
