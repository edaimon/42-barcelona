/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:39:17 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/21 12:35:44 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
//
//int	main(void)
//{
//	int	a;
//	int	b;
//	int	*p1;
//	int	*p2;
//
//	a = 19;
//	b = 42;
//	p1 = &a;
//	p2 = &b;
//	printf("El primer número antes de la función es %i\n", a);
//	printf("El segundo número antes de la función es %i\n\n", b);
//	ft_swap(p1, p2);
//	printf("El primer número después de la función es %i\n", a);
//	printf("El segundo número después de la función es %i\n", b);
//}
