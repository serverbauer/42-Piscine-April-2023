/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:26:20 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 17:36:20 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	myAge;
	int	*ptr = &myAge;

	myAge = 43;

	printf("%i\n", myAge);
	printf("%p\n", &myAge);
	printf("%p\n", ptr);

	if (ptr == &myAge)
	{
		printf("JA\n");
		printf("ptr: %p\n", ptr);
		printf("myAge: %p\n", &myAge);
	}
	else
	{
		printf("NE DIGGI\n");
		printf("ptr: %p\n", ptr);
		printf("myAge: %p\n", &myAge);
	}

	return (0);
}
