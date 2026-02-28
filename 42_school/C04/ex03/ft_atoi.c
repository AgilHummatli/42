/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:54:40 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/17 20:07:58 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 9 and 13 are whitespace characters, '_' is 32 so write separately
// result * 10 + (str[i] - '0') is atoi formula.
// each time there is '-' negative, it flips sign with multiplying
// #include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main()
{
	char str[] = "---+--+1231aa123123";
	printf ("%d\n", ft_atoi(str));
} */
