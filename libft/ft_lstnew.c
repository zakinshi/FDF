/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:11:09 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 14:54:43 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// linlist is Linked representation != tab is Sequential representation
t_list	*ft_lstnew(void *content)
{
	t_list	*start;

	start = (t_list *)malloc(sizeof(t_list));
	if (!start)
		return (0);
	start->content = content;
	start->next = 0;
	return (start);
}
