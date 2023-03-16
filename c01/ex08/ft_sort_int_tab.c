/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-juan <ede-juan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:49:26 by ede-juan          #+#    #+#             */
/*   Updated: 2023/02/22 20:58:17 by ede-juan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//• Escribe una función que ordene un array de int en orden ascendente.
//• Los parámetros son un puntero a int y el número de int en el array.
//• El prototipo de la función deberá ser el siguiente:

//#include <stdio.h>
void	ft_swap(int *a, int k, int j)
{
	int	temp;

	temp = a[k];
	a[k] = a[j];
	a[j] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	size = size - 1;
	while (i <= size)
	{
		k = i;
		j = i - 1;
		while (tab[k] < tab[j])
		{
			ft_swap(tab, k, j);
		k--;
		j--;
		}
	i++;
	}
}
//
//void	ft_print(int *numeritos, int size)
//{
//	int	l;
//	l = 0;
//	while (l < size - 1)
//	{
//		printf("%i ", numeritos[l]);
//		l++;
//	}
//	printf("%i\n", numeritos[l]);
//}
//
//int	main(void)
//{
//	int numeritos[50] = {2, 4, 60, 9, 1, 7, 20, 3, 77, 145};
//	printf("%i\n", numeritos[0]);
//	ft_sort_int_tab(numeritos, 10);
//	ft_print(numeritos, 10);
//	return (0);
//}
