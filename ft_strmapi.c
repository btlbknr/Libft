/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:02:50 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 16:03:10 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
