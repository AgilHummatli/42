/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:58:19 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 17:58:19 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*conversion(char *str, int n, int index)
{
	int	temp;

	while (n > 0 && str[index] != '-')
	{
		temp = n % 10;
		str[index] = temp + '0';
		n = n / 10;
		index--;
	}
	return (str);
}

static int	stringleng(int a)
{
	size_t	k;
	size_t	bytes;

	k = a;
	bytes = 0;
	while (k != 0)
	{
		bytes++;
		k = k / 10;
	}
	return (bytes);
}

char	*ft_itoa(int n)
{
	size_t	memory;
	int		is_minus;
	char	*str;

	is_minus = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * (-1);
		is_minus = 1;
	}
	memory = stringleng(n);
	str = ft_calloc(sizeof(char), (memory + 1 + is_minus));
	if (str == NULL)
		return (NULL);
	str[memory + is_minus] = '\0';
	if (is_minus)
		str[0] = '-';
	conversion(str, n, memory + is_minus - 1);
	return (str);
}
