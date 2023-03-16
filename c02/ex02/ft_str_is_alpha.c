/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:23:16 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/23 21:10:08 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 if the string given as a parameter
// contains only alphabetical characters, and 0 if it contains any other character.
// • It should return 1 if str is empty.
// NO ALLOWED FUNCTIONS

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	i = 0;
	int resultado;
	resultado = 1;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z'))
		{
			resultado = 0;
		}
	i++;
	}
	return (resultado);
}

int	main(void)
{
	char	fr1[] = "asdfkljh";
	char	fr2[] = "asdfkl;'";
	char	fr3[5];
	ft_str_is_alpha(fr1);
	printf("La frase 1 retorna %i\n",ft_str_is_alpha(fr1));
	ft_str_is_alpha(fr2);
	printf("La frase 2 retorna %i\n",ft_str_is_alpha(fr2));
	ft_str_is_alpha(fr3);
	printf("La frase 3 retorna %i\n",ft_str_is_alpha(fr3));
	return (0);
}
