/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwalchsh <der.grex@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:06:41 by gwalchsh          #+#    #+#             */
/*   Updated: 2023/04/22 11:06:50 by gwalchsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	window(int x, int y, int ix, int iy)
{
	if (ix == 1)
	{
		if (iy == 1 || iy == y)
			ft_putchar('A');
		else
			ft_putchar ('B');
	}
	else if (ix == x)
	{
		if (iy == 1 || iy == y)
			ft_putchar('C');
		else
			ft_putchar ('B');
	}
	else if (ix != 1 || ix != x)
	{
		if (iy == 1 || iy == y)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

int	rush(int x, int y)
{
	int	ix;
	int	iy;

	if (x <= 0 || y <= 0)
	{
		write(1, "One or more Parameters are negative or 0!", 41);
		return (0);
	}
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			window(x, y, ix, iy);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
	return (0);
}
