/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:19:47 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/24 12:50:35 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 if the string given as a parameter
// contains only digits, and 0 if it contains any other character.
// • It should return 1 if str is empty.

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	i++;
	}
	return (1);
}
int main(void)
{
	char	fr1[] = "11";
	char	fr2[] = "155363";
	char	fr3[5];

	ft_str_is_numeric(fr1);
	printf("La frase 1 retorna %i\n", ft_str_is_numeric(fr1));
	ft_str_is_numeric(fr2);
	printf("La frase 2 retorna %i\n", ft_str_is_numeric(fr2));
	ft_str_is_numeric(fr3);
	printf("La frase 3 retorna %i\n", ft_str_is_numeric(fr3));
	return (0);
}

