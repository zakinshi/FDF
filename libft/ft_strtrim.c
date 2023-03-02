/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:37:17 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 13:59:05 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	beginning(char const *s, char const *set)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	return (i);
}

static size_t	ends(char const *s, char const *set)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0 && ft_strchr(set, s[len]))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	end;
	size_t	begin;
	size_t	size;

	if (!s1 || !set)
		return (0);
	begin = beginning(s1, set);
	end = ends(s1, set);
	size = end + 1 - begin;
	copy = ft_substr(s1, begin, size);
	return (copy);
}
