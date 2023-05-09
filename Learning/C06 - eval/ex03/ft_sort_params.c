/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthaler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:15:59 by cthaler           #+#    #+#             */
/*   Updated: 2023/04/26 18:16:00 by cthaler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_char_tab(char *tab[], int size);
void	ft_strncpy(char *dest, char *src, unsigned int n);
int		str_len(char *arr);
int		ft_strcmp(char *s1, char *s2);

int	str_len(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] || s2[n])
	{
		if (s1[n] < s2[n])
			return (-1);
		if (s2[n] < s1[n])
			return (1);
		n++;
	}
	return (0);
}

void	ft_sort_argv(char *argv[], int argc)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < argc)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		j = 1;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	(void)argv;
	i = 1;
	if (argc > 2)
	{
		ft_sort_argv(argv, argc);
		while (i < argc)
		{
			write (1, &argv[i][0], str_len(argv[i]));
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
