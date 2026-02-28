/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_converter.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <ahummatl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:35:44 by ahummatl          #+#    #+#             */
/*   Updated: 2025/04/09 17:35:46 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static size_t	size_of_string(unsigned int a);
static char		*upper_hex(unsigned int a, char *string, int pos);

char	*ft_hexadecimal_converter(unsigned int a, char x)
{
	const char	*characters2;
	char		*string;
	int			remainder;
	int			i;

	characters2 = "0123456789abcdef";
	i = size_of_string(a);
	string = malloc((i + 1) * (sizeof(char)));
	if (string == NULL)
		return (NULL);
	string[i] = '\0';
	i--;
	if (x == 'X')
		upper_hex(a, string, i);
	else if (x == 'x')
	{
		while (a > 0)
		{
			remainder = a % 16;
			string[i] = characters2[remainder];
			a /= 16;
			i--;
		}
	}
	return (string);
}

static char	*upper_hex(unsigned int a, char *string, int pos)
{
	const char	*characters;
	int			remainder;

	characters = "0123456789ABCDEF";
	while (a > 0)
	{
		remainder = a % 16;
		string[pos] = characters[remainder];
		a /= 16;
		pos--;
	}
	return (string);
}

static size_t	size_of_string(unsigned int a)
{
	int		i;
	size_t	amount;

	amount = 0;
	i = 0;
	while (a > 0)
	{
		amount++;
		a /= 16;
	}
	return (amount);
}
