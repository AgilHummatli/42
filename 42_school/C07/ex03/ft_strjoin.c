/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:10:34 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/23 20:46:37 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_all_lengths(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*all_together;

	sum = 0;
	if (size <= 0)
		return ((char *)malloc(1));
	i = 0;
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		i++;
	}
	sum += ft_strlen(sep) * (size - 1);
	all_together = (char *)malloc(sizeof(char) * (sum + 1));
	if (all_together == NULL)
		return (NULL);
	return (all_together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all_together;

	all_together = ft_all_lengths(size, strs, sep);
	if (all_together == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			all_together[c++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				all_together[c++] = sep[j++];
		i++;
	}
	all_together[c] = '\0';
	return (all_together);
}

int	main(void)
{
	char *strs[] = {"Hello", "World", "42"};
	char *sep = "@ ";
	char *result = ft_strjoin(3, strs, sep);

	if (result)
	{
		printf("%s\n", result);  // Expected: "Hello, World, 42"
		free(result);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
} 
