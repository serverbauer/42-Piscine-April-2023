/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:46:36 by fhess             #+#    #+#             */
/*   Updated: 2023/04/27 15:52:09 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
	return (0);
}
