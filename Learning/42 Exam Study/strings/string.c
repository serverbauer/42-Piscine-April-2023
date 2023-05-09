/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:40:07 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 16:49:23 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char greetings[] = "Hello World!";
	//greetings[1] = 'T';

	//write(1, &greetings[1], 1);

	//loop
	int i;

	i = 0;
	while (i < 13)
	{
		ft_putchar(greetings[i]);
		i++;
	}

	return (0);
}
