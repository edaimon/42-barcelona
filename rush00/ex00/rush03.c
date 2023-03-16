/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-al <maria-al@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:24:40 by maria-al          #+#    #+#             */
/*   Updated: 2023/02/12 14:50:28 by maria-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	topbottom(int x, int y, int con_x, int con_y);
void	sidebars(int x, int y, int con_x, int con_y);

void	rush(int x, int y)
{
	int	con_x;
	int	con_y;

	con_x = 1;
	con_y = 1;
	while (y >= con_y)
	{
		while (x >= con_x)
		{
			if (con_y == 1 || con_y == y)
				topbottom(x, y, con_x, con_y);
			else
				sidebars(x, y, con_x, con_y);
			con_x++;
		}
		ft_putchar('\n');
		con_x = 1;
		con_y++;
	}
}

void	topbottom(int x, int y, int con_x, int con_y)
{
	if ((con_x == 1 && con_y == 1) || (con_x == 1 && con_y == y))
		ft_putchar('A');
	else if ((con_x < x && con_y == 1) || (con_x < x && con_y == y))
		ft_putchar('B');
	else
		ft_putchar('C');
}

void	sidebars(int x, int y, int con_x, int con_y)
{
	if ((con_y > 1 && con_y < y && con_x == 1) || con_x == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
