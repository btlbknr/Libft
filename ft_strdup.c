/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:20:55 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 13:22:32 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*nstr;
	size_t	n;

	n = ft_strlen(str);
	nstr = (char *)malloc(n + 1);
	if (!(nstr))
		return (NULL);
	ft_memcpy(nstr, str, n + 1);
	return (nstr);
}
