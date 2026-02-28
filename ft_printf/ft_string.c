/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <ahummatl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:37:34 by ahummatl          #+#    #+#             */
/*   Updated: 2025/04/09 17:37:39 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_string(char *s)
{
	size_t	bytes;
	int		i;

	i = 0;
	bytes = 0;
	if (s == NULL)
		bytes += write(1, "(null)", 6);
	else
	{
		while (s[i] != '\0')
		{
			bytes += write(1, &s[i], 1);
			i++;
		}
	}
	return (bytes);
}
