/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:13:11 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/20 20:41:05 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
/*
int	main()
{
	int	nb = 0;
	int	p = -5;

	printf("%d\n", ft_iterative_power(nb, p));
} */
