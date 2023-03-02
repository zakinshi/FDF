/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:32:37 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/19 18:11:27 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	string_data(t_var *data)
{
	int		i;
	char	*line;

	i = 0;
	data->data_lines = (char **)malloc(sizeof(char *) * (data->height + 1));
	if (!data->data_lines)
		costum_exit("DATA_LINES DOESN'T ALLOCATED\n");
	data->fd = open(data->file_mape, O_RDONLY);
	line = get_next_line(data->fd);
	while (line)
	{
		data->width = ft_strlen(line);
		line[data->width] = '\0';
		data->data_lines = ft_strdup(line);
		free(line);
		i++;
	}
	data->data_lines[i] = 0;
}

static int	*ft_atoi_xd(t_var *data, char *str)
{
	int	*data_arr;
	int	i;

	data_arr = (int *)malloc(sizeof(int) * data->wcount);
	if (!data_arr)
		costum_exit("Allocation Fail in Atoi_xd\n");
	data->splited = ft_split(str, ' ');
	i = 0;
	while (i < data->wcount)
	{
		if (ft_isdigit(data->splited[i][0]))
			data_arr[i] = ft_atoi(data->splited[i]);
		else if (data->splited[i][0] == '+' && ft_isdigit(data->splited[i][1]))
			data_arr[i] = ft_atoi(data->splited[i]);
		else if (data->splited[i][0] == '-' && ft_isdigit(data->splited[i][1]))
			data_arr[i] = ft_atoi(data->splited[i]);
		else
			costum_exit("WARNING : NON-DIGIT Character In Map\n");
		i++;
	}
	return (data_arr);
}

void	integer_data(t_var	*data)
{
	int	i;

	data->int_data = (int **)malloc(sizeof(int *) * data->map_height);
	if (!data->int_data)
		costum_exit("Integer Data Allocation FAIL\n");
	i = 0;
	while (i < data->map_height)
	{
		data->int_data[i] = ft_atoi_xd(data, data->data_lines[i]);
		i++;
	}
}
