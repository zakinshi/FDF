/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbouhami <zbouhami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:54:10 by zbouhami          #+#    #+#             */
/*   Updated: 2023/02/17 20:33:59 by zbouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// cut the s & allocate each word : returns a arry
int	ft_count_words(char const *str, char c)
{
	int	flag;
	int	count;
	int	i;

	i = 0;
	flag = 1;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			flag = 1;
		else if (flag)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

static void	free_all(char **sc)
{
	int	l;

	l = 0;
	while (sc[l])
	{
		free(sc[l]);
		l++;
	}
	free(sc);
}

static char	*takeword(char const *s, char c, int *index)
{
	char	*word;
	int		i;
	int		save;
	int		a;

	i = *index;
	if (!s)
		return (NULL);
	while (s[i] == c)
		i++;
	save = i;
	while (s[i] != c && s[i])
		i++;
	word = malloc(sizeof(char) * (i - save) + 1);
	if (!word)
		return (NULL);
	a = 0;
	while (save < i)
		word[a++] = s[save++];
	word[a] = '\0';
	*index = i;
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**sence;
	int		nword;
	int		i;
	int		w;

	if (!str)
		return (NULL);
	nword = ft_count_words(str, c);
	w = 0;
	i = 0;
	sence = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!sence)
		return (NULL);
	while (w < nword)
	{
		sence[w] = takeword(str, c, &i);
		if (!sence[w])
			return (free_all(sence), NULL);
		w++;
	}
	sence[w] = 0;
	return (sence);
}
