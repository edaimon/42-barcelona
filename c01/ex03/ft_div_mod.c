/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:38:30 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/21 13:23:14 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
//	int	total;
//	int	resto;

//	*div = &total;
//	*mod = &resto;
	
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	total;
	int	resto;
	int *div;
	int *mod;
	a = 13;
	b = 4;
	div = &total;
	mod = &resto;

	ft_div_mod(a, b, div, mod);
	printf("El número  %i\n", a);
	printf("se divide por %i\n\n", b);
	printf("El resultado  es  %i\n", total);
	printf("el resto es %i\n", resto);

	return (0);
}
