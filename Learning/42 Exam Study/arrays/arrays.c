/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:03:13 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 16:13:15 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	myNumbers[7] = {1, 25, 45, 99, 256, 945, 785};

	int i;

	i = 0;
	while (i < 7)
	{
		printf("%i\n", myNumbers[i]);
		i++;
		//printf("%i\n", myNumbers[i]);
	}

	printf("%i\n", myNumbers[3]);

	return (0);
}
