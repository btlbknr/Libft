/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:01:59 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/28 15:00:46 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		size_dst;
	size_t		size_src;

	i = 0;
	if (!dst && !size)
		return (0);
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	j = size_dst;
	if (size_dst < size - 1 && size > 0)
	{
		while (src[i] && size_dst + i < size - 1)
		{	
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (size_dst >= size)
		size_dst = size;
	return (size_dst + size_src);
}
