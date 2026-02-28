/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:47:41 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/23 16:53:23 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;
	int	diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	result = (int *)malloc(sizeof(int) * diff);
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (i < diff)
	{
		result[i] = min + i;
		i++;
	}
	return (diff);
}
/*
int	main(void)
{
	int	*array;
	int	size;
	int	min = 5;
	int	max = 10;

	size = ft_ultimate_range(&array, min, max);
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
			printf("%d ", array[i]);
		printf("\n");
	}
	else if (size == 0)
		printf("Range is empty\n");
	else
		printf("Error in memory allocation\n");

	if (size > 0)
		free(array);
	return (0);
} */
