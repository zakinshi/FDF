/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:30:47 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/18 00:08:17 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char **av)
{
	t_var	var;

	if (ac != 2)
		exit_args();
	var.fd = open("argv[1]", O_RDONLY);
	if (var.fd == -1)
		costum_exit("NO SUCH FILE ..!");
	var.file_mape = av[1];
	generate_display(var);
	close(var.fd);
	return (0);
}