/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnematil <jnematil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:58:02 by jnematil          #+#    #+#             */
/*   Updated: 2025/01/14 17:58:02 by jnematil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			size_to_allocate;
	size_t			k;
	unsigned char	*p;

	if (!size || !nmemb)
		return (malloc(0));
	size_to_allocate = nmemb * size;
	if (nmemb != 0 && size_to_allocate / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc(size_to_allocate);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = (unsigned char *)ptr;
	k = 0;
	while (k < size_to_allocate)
	{
		p[k] = 0;
		k++;
	}
	return (ptr);
}
