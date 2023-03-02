/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:42:53 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/12 23:30:29 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line/get_next_line.h"
#include <string.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc == 2)
	{
		if (strcmp("map_42.fdf", argv[1]))
			return (0);
		fd = open("map_42.fdf", O_RDONLY);
		line = get_next_line(fd);
		while (line)
		{
			printf("%s", line);
			line = get_next_line(fd);
		}
	}
	return (0);
}