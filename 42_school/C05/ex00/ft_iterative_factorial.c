/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:18:06 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/20 19:40:59 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
int	main()
{
int	nb;
nb = 6;
printf("%d\n", ft_iterative_factorial(nb));

} */
