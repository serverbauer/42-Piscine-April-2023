/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:18:37 by fhess             #+#    #+#             */
/*   Updated: 2023/05/04 16:21:22 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   This function takes a string 'str' as an argument and returns 1 if the string
   contains only uppercase alphabetical characters,
   and 0 if it contains any other character. If the string
   is empty, it returns 1.
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
