/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:01:13 by fhess             #+#    #+#             */
/*   Updated: 2023/04/24 17:01:16 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combn_rec(char buf[], int pos, int n, int start)
{
	int	i;

	if (pos == n)
	{
		i = 0;
		while (i < n)
		{
			write(1, &buf[i], 1);
			i++;
		}
		if (buf[0] != '9' - n + 1 || buf[n - 1] != '9')
			write(1, ", ", 2);
	}
	else
	{
		i = start;
		while (i <= 9)
		{
			buf[pos] = i + '0';
			print_combn_rec(buf, pos + 1, n, i + 1);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	*buf;

	buf = malloc(sizeof(char) * n);
	print_combn_rec(buf, 0, n, 0);
	free(buf);
}

int	main(void)
{
	int	n;

	n = 2;
	if (n >= 1 && n <= 9)
	{
		ft_print_combn(n);
	}
	return (0);
}
