/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:25:30 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/19 17:34:08 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <mlx.h>
# include <unistd.h>

/*	  Define some Colors	*/
# define RED 	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

/*	Window Dimostration	*/
# define LENGTH 600
# define WIDTH 600

/*		My structs	*/
typedef struct s_mlx
{
	void	*mlx;
	void	*img;
	void	*win;
	char	*addr;
	int		b_p_p;
	int		len_l;
	int		bdn;
}	t_mlx;

typedef struct s_my_var
{
	int		fd;
	int		width;
	int		height;
	int		wcount;
	int		map_width;
	int		map_height;
	char	*file_mape;
	char	**data_lines;
	int		**int_data;
	char	**splited;
}	t_var;


/*		My Functions	*/
void	exit_args(void);
void	costum_exit(char *s);
void	string_data(t_var *data);
void	integer_data(t_var	*data);
void	generate_display(t_var var);

#endif