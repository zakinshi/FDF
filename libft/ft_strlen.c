/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:24:21 by zbouhami          #+#    #+#             */
/*   Updated: 2022/10/24 02:31:41 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Fonction that calc the length of the string
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
