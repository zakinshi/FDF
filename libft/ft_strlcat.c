/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:43:04 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/11 14:30:42 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (slen + dstsize);
	dlen = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	i = 0;
	while (src[i] && (i < dstsize - dlen - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
