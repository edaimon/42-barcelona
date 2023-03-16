/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:22:05 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/20 15:25:42 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_loop(char a, char b)
{
	char	dec;
	char	uds;

	dec = '0';
	uds = '0';
	dec = dec + a / 10;
	uds = uds + a % 10;
	write(1, &dec, 1);
	write(1, &uds, 1);
	write(1, " ", 1);
	dec = '0';
	uds = '0';
	dec = dec + b / 10;
	uds = uds + b % 10;
	write(1, &dec, 1);
	write(1, &uds, 1);
	if (!(a == 98 && b == 99))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{	
			ft_print_loop(a, b);
			b++;
		}
	a++;
	}
}
//
//int	main(void)
//{
//	ft_print_comb2 ();
//	return (0);
//}
