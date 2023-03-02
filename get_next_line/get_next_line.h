/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:56:30 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/12 20:56:48 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_strlen(char *str);
void	my_free(void *to_free);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);
char	*make_copy(char *copy, char *s);
char	*find_newline(char *search_in);
char	*ft_strjoin(char *s1, char *s2);

#endif
