/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:30:46 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/23 16:35:10 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;

	if (min >= max)
		return (NULL);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
