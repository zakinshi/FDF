/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:02:37 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 15:57:25 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// handle the overlap in cpy
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}
