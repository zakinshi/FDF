/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:47:46 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 12:17:00 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	slen;
	size_t	stop;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((slen - start) < len)
		stop = slen - start;
	else
		stop = len;
	if (start >= slen)
		return (ft_strdup(""));
	substring = (char *)malloc(sizeof(char) * (stop + 1));
	if (!substring || !s)
		return (NULL);
	ft_strlcpy(substring, (s + start), stop + 1);
	return (substring);
}
