/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:17:48 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/13 17:05:41 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pass_index;
	int	element_index;
	int	temp;

	pass_index = 0;
	while (pass_index < size - 1)
	{
		element_index = 0;
		while (element_index < size - pass_index - 1)
		{
			if (tab[element_index] > tab[element_index + 1])
			{
				temp = tab[element_index];
				tab[element_index] = tab[element_index + 1];
				tab[element_index + 1] = temp;
			}
			element_index++;
		}
		pass_index++;
	}
}
