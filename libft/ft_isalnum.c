/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:31:13 by zbouhami          #+#    #+#             */
/*   Updated: 2022/11/13 16:05:26 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funct* check if a char is a num or alpha & return 0 if isn't
int	ft_isalnum(int almn)
{
	int	al;
	int	num;

	al = ((almn >= 'A' && almn <= 'Z')
			|| (almn >= 'a' && almn <= 'z'));
	num = (almn >= '0' && almn <= '9');
	if (al || num)
		return (1);
	else
		return (0);
}
