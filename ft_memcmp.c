/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:34:42 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/27 16:33:35 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a, const void *b, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(a + i) != *(unsigned char *)(b + i))
			return (*(unsigned char *)(a + i) - *(unsigned char *)(b + i));
		i++;
	}
	return (0);
}
