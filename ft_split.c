/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:32:00 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 15:32:22 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			len++;
			while (*s && *s != c)
				s++;
		}
		if (*s)
			s++;
	}
	return (len);
}

char	**ft_split_make(char const *s, char c, char **tmp, size_t i)
{
	char	*start;

	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			tmp[i] = (char *)malloc(sizeof(char) * (s - start + 1));
			if (!tmp[i])
				return (NULL);
			ft_strlcpy(tmp[i++], start, s - start + 1);
		}
		if (*s)
			s++;
	}
	tmp[i] = NULL;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;

	if (!s || !c)
		if (!s)
			return (NULL);
	tmp = (char **)malloc(sizeof(char *) * (size(s, c) + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	tmp = ft_split_make(s, c, tmp, i);
	return (tmp);
}
