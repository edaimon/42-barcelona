/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:59:48 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/21 16:36:09 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// EX06 -> Escribe una función que cuente el número
// de caracteres de un string y que devuelva el número encontrado.
//
//#include <stdio.h>
//
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//
//int	main(void)
//{
//	char	string[] = "jalou lobassssss";
//	ft_strlen(string);
//	printf("Esa frase pecadora tiene %i carácteres", i); <- poner esta frase dentro de la función para comprobar
//	return (0);
//}
