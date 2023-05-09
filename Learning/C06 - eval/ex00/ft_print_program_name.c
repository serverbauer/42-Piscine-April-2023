/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthaler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:15:38 by cthaler           #+#    #+#             */
/*   Updated: 2023/04/26 18:15:40 by cthaler          ###   ########.fr       */
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
	(void)argc;
	(void)argv;
	write (1, &argv[0][0], str_len(argv[0]));
	write (1, "\n", 1);
	return (0);
}
