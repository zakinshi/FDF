/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:37:19 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 14:22:55 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string_joined;
	size_t	ls1;
	size_t	ls2;
	size_t	allocat;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	allocat = (ls1 + ls2) + 1;
	string_joined = malloc(allocat);
	if (!string_joined)
		return (NULL);
	ft_strlcpy(string_joined, s1, ls1 + 1);
	ft_strlcat(string_joined, s2, allocat);
	return (string_joined);
}
