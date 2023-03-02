/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:53:31 by zbouhami          #+#    #+#             */
/*   Updated: 2022/10/07 23:02:24 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fonct* check if the chur is printable or not
int	ft_isprint(int chur)
{
	int	printable;

	printable = (chur >= 32 && chur <= 126);
	if (printable)
		return (1);
	else
		return (0);
}
