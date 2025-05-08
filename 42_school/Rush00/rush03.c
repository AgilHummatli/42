/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:33:21 by mstepnic          #+#    #+#             */
/*   Updated: 2024/10/06 11:40:24 by mstepnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = 1;
	height = 1;
	while (height <= y)
	{
		if (x < 0 || y < 0)
			break ;
		while (width <= x)
		{
			if (width == 1 && (height == 1 || height == y))
				ft_putchar('A');
			else if (width == x && (height == 1 || height == y))
				ft_putchar('C');
			else if ((width >= 2 && width < x) && (height >= 2 && height < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			width++;
		}
		ft_putchar('\n');
		height++;
		width = 1;
	}
}
