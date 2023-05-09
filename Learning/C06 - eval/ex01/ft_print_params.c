/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthaler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:15:15 by cthaler           #+#    #+#             */
/*   Updated: 2023/04/26 18:15:17 by cthaler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len(char *arr);

int	str_len(char *arr)
{
	int	n;

	n = 0;
	while (arr[n])
		n++;
	return (n);
}

int	main(int argc, char *argv[])
{
	int	n;

	(void)argc;
	(void)argv;
	n = 1;
	while (n < argc)
	{
		write(1, &argv[n][0], str_len(argv[n]));
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
