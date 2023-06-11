/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:19:18 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/28 15:01:53 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;

	if (n == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	dest = (void *)malloc(n * size);
	if (!dest)
		return (0);
	ft_bzero(dest, n * size);
	return (dest);
}
