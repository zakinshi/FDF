/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:35:40 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/17 19:46:49 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	exit_args(void)
{
	ft_putstr_fd(RED"INVALID ARGS : \n", 1);
	ft_putstr_fd(GREEN"\t\t./fdf path_to_map/map.fdf\n", 1);
	ft_putstr_fd(WHITE, 1);
	exit(0);
}

void	costum_exit(char *s)
{
	ft_putstr_fd(YELLOW, 1);
	ft_putstr_fd(s, 1);
	ft_putstr_fd(WHITE, 1);
	exit(0);
}
