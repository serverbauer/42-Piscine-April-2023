/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:57:33 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 17:57:42 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	   write(1, "a\n", 2);
	return (0);
}