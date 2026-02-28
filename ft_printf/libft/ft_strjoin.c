/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:59:18 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 17:59:18 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	char	*new_str;

	i = 0;
	k = 0;
	new_str = malloc(((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)));
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		new_str[i] = s2[k];
		i++;
		k++;
	}
	new_str[i] = '\0';
	return (new_str);
}
