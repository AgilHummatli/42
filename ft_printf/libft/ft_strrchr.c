/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:00:42 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 18:00:42 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last_seen;

	i = 0;
	last_seen = -1;
	while (str[i] != 0)
	{
		if (str[i] == (char)c)
		{
			last_seen = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	if (last_seen == -1)
		return (NULL);
	return ((char *)&str[last_seen]);
}
