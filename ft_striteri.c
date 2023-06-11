/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:05:37 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 16:05:44 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	count;

	if (!s || !f)
		return ;
	count = 0;
	while (s[count])
	{
		f(count, s + count);
		count++;
	}
}
