/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:40:44 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 15:55:09 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int myNum1;
	int myNum2;
	int sum1;
	int sum2;
	int sum3;

	myNum1 = 2;
	myNum2 = 5;
	sum1 = myNum1 + myNum2;
	sum2 = sum1 + myNum2;
	sum3 = sum1 + sum2;

	printf("%i\n", sum1);
	printf("%i\n", sum2);
	printf("%i\n", sum3);

	myNum1 += 10;

	printf("%i\n\n", myNum1);

	myNum1 *= 10;

	printf("%i\n", myNum1);

	myNum2 &= 10;

	printf("%i\n", myNum2);
	return (0);
}
