/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthaler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:13:45 by cthaler           #+#    #+#             */
/*   Updated: 2023/04/26 18:14:05 by cthaler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	find_array_size(char *arr);

int	find_array_size(char *arr)
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
	n = argc - 1;
	while (n > 0)
	{
		write(1, &argv[n][0], find_array_size(argv[n]));
		n--;
		write(1, "\n", 1);
	}
	return (0);
}
