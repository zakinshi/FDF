/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:50:05 by zbouhami          #+#    #+#             */
/*   Updated: 2022/10/07 22:25:58 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fonct* check is the var entered is inlude in tabe ascii
int	ft_isascii(int chur)
{
	int	ascii;

	ascii = (chur >= 0 && chur <= 127);
	if (ascii)
		return (1);
	else
		return (0);
}
