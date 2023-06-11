/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:35:59 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 11:35:57 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (dest == src)
		return (dest);
	else if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		str1 = (unsigned char *)dest;
		str2 = (const unsigned char *)src;
		while (n--)
			str1[n] = str2[n];
	}
	return (dest);
}
