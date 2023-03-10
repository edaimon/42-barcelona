/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:53:42 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/26 17:20:32 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// • Create a function that returns 1 if the string given as a parameter contains only
// uppercase alphabetical characters, and 0 if it contains any other character.
// • It should return 1 if str is empty.

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
	i++;
	}
return (1);
}

int	main(void)
{
	char	fr1[] = "asdf";
	char	fr2[] = "AGFSDF";
	char	fr3[5];

	ft_str_is_uppercase(fr1);
	printf("FR 1 retorna %i", ft_str_is_uppercase(fr1));
	ft_str_is_uppercase(fr2);
	printf("\nFR 2 retorna %i", ft_str_is_uppercase(fr2));
	ft_str_is_uppercase(fr1);
	printf("\nFR 3 retorna %i", ft_str_is_uppercase(fr3));

	return (0);
}
