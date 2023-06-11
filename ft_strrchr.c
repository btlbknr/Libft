/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:14:32 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/21 14:16:13 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	int	i;

	i = (int)ft_strlen(str) + 1;
	while (i--)
		if (*(str + i) == (char)x)
			return ((char *)str + i);
	return (NULL);
}
