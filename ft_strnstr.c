/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:30:14 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/28 15:01:30 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	ptrlen;

	if (n == 0 && !str)
		return (NULL);
	ptrlen = ft_strlen(ptr);
	if (!ptrlen)
		return ((char *)str);
	while (*str && ptrlen <= n--)
	{
		if (!ft_strncmp(str, ptr, ptrlen))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
