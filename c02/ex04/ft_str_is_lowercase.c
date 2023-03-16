/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:59:01 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/24 13:36:51 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 if the string given as a parameter
// contains only lowercase alphabetical characters, and 0 if it contains any other character.
// It should return 1 if str is empty.

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int	main(void)
{
	char	fr1[] = "aa";
	char	fr2[] = "asdaASDA3";
	char	fr3[5];

	ft_str_is_lowercase(fr1);
	printf("La frase 1 retorna %i\n", ft_str_is_lowercase(fr1));
	ft_str_is_lowercase(fr2);
	printf("La frase 2 retorna %i\n", ft_str_is_lowercase(fr2));
	ft_str_is_lowercase(fr3);
	printf("La frase 3 retorna %i\n", ft_str_is_lowercase(fr3));
	return (0);
}


