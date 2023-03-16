/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:46:46 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/23 18:33:00 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduce the behavior of the function strcpy (man strcpy).

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;	
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	char	orig[] = "Copiame que me gusta";
	char	dest[21];
	
	ft_strcpy(dest, orig);
	printf("La frase inicial es %s\n", orig);
	printf("La frase copiada es %s", dest);
	return (0);
}
