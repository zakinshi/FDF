/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:58:02 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:02:17 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Find the last box
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (!lst)
		return (NULL);
	while (last)
	{
		if (!(last->next))
			return (last);
		last = last->next;
	}
	return (0);
}
