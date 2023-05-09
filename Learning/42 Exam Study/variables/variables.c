/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:40:59 by fhess             #+#    #+#             */
/*   Updated: 2023/05/05 19:12:03 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	test(void)
{
	//create the variables
	int	myNum;
	int myNumber;
	int myEmptyNum;
	int sum;
	float myFloat;
	char	myChar;

	//add value
	myNum = 2;
	myNumber = 500;
	myFloat = 5.55;
	myChar = 'h';

	myNum = myNumber;
	myEmptyNum = myNumber;

	sum = myNum + myNumber;

	//output
	ft_putnbr(myNum);
	printf("%f\n", myFloat);
	printf("%c\n", myChar);
	ft_putchar(myChar);
	printf("\n%d\n", myNum);
	printf("%d\n", myEmptyNum);
	printf("%d\n", sum);
}

int	main(void)
{
	test();
	return (0);
}
