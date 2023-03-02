/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:20:14 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/11 14:29:48 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fonct* check if a char is a alpha
int	ft_isalpha(int alpha)
{
	if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
		return (1);
	else
		return (0);
}
