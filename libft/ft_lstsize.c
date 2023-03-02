/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:10:41 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:01:26 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Calac size of linlist
int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*last;

	last = lst;
	size = 0;
	if (!lst)
		return (0);
	else
	{
		while (last)
		{
			last = last->next;
			size++;
		}
	}
	return (size);
}
