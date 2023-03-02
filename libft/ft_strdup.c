/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:20:11 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 15:48:37 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// allocate s
char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s) + 1;
	copy = (char *)malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	len = 0;
	while (*(s + len) != '\0')
	{
		*(copy + len) = *(s + len);
		len++;
	}
	*(copy + len) = '\0';
	return (copy);
}
