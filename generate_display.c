/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:51:38 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/19 18:10:52 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	check_height(t_var data)
{
	int		tmp_wcount;
	char	*line;

	data.height = 0;
	line = get_next_line(data.fd);
	if (line)
	{
		data.wcount = ft_count_words(line, ' ');
		free(line);
		data.height += 1;
	}
	else
		costum_exit("NO_SUCH_LINE ..!");
	line = get_next_line(data.fd);
	while (line)
	{
		tmp_wcount = ft_count_words(line, ' ');
		if (tmp_wcount != data.wcount)
			costum_exit("WARNING : ILLAGLE ROWS IN MAP\n");
		free(line);
		data.height += 1;
		line = get_next_line(data.fd);
	}
	close(data.fd);
	return (data.height);
}

void	generate_display(t_var data)
{
	t_mlx	*mlx;

	mlx = malloc(sizeof(t_mlx));
	if (!mlx)
		costum_exit("MLX Struct Doesn't Allocated\n");
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, LENGTH, WIDTH, "FDF Wireframe - 3D");
	data.height = check_height(data);
	string_data(&data);
	integer_data(&data);
	data.map_height = data.height;
	data.map_width = ft_count_words(data.data_lines[0], ' ');
	// init the rest of struct;
	// creat_my_map(&data, mlx)
	// mlx_hook
	mlx_loop(mlx->mlx);
}
