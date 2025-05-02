/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahummatl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:21:48 by ahummatl          #+#    #+#             */
/*   Updated: 2024/10/15 20:16:31 by ahummatl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/* int main(void)
{
  
    char test1[] = "HelloWorld";   
    char test2[] = "Hello123";      
    char test3[] = "";            

   
    printf("Test 1 (HelloWorld): %d\n", ft_str_is_alpha(test1));
    printf("Test 2 (Hello123): %d\n", ft_str_is_alpha(test2)); 
    printf("Test 3 (Empty string): %d\n", ft_str_is_alpha(test3));

    return (0);
} */
