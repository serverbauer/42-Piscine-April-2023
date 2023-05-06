/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:50:23 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 17:04:46 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//ft_putchar(strlen(alphabet));
	printf("%lu\n", strlen(alphabet));

	int length;

	length = 0;
	while (alphabet[length] != '\0')
	{
		length++;
	}

	printf("%d\n", length);

	return (0);
}
