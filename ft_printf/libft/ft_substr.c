/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:59:46 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 17:59:46 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	size;

	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL || s == NULL)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	if (start > size)
	{
		sub[i] = '\0';
		return (sub);
	}
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
