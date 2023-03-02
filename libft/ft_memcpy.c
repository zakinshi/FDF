/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:46:50 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 15:58:04 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// cpy n bytes src in dst 
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst1 && !src1)
		return (NULL);
	while (i < n)
	{
		*(dst1 + i) = *(src1 + i);
		i++;
	}
	return (dst);
}
