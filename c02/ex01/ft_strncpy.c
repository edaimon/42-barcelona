/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:48:55 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/23 20:19:47 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strncpy (man strncpy).

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	int	limit;
	char	orig[] = "Basta de censura";
	char	dest[15];
	
	limit = 14;
	ft_strncpy(dest, orig, limit);
	printf("La frase original es %s\n", orig);
	printf("La frase copiá es %s\n", dest);
	printf("El limite de caracteres es %i\n", limit);
	return (0);
}
