/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:14:41 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:46:01 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// App the f in each char in s & creating new string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ps;
	size_t			ln;	

	if (!s || !f)
		return (NULL);
	i = 0;
	ln = ft_strlen(s);
	ps = (char *)malloc((ln + 1) * sizeof(char));
	if (ps == NULL)
		return (0);
	while (s[i])
	{
		ps[i] = f(i, s[i]);
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
