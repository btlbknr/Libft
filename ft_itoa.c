/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbakaner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:34:24 by fbakaner          #+#    #+#             */
/*   Updated: 2022/12/23 15:45:23 by fbakaner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num(int n, int state)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	if (state < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	sign;
	int		length;
	long	number;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	number = sign * n;
	length = ft_num(number, sign);
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (0);
	str[length] = '\0';
	while (--length >= 0)
	{
		str[length] = 48 + (number % 10);
		number /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
