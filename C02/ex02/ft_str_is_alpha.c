/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:42:24 by fhess             #+#    #+#             */
/*   Updated: 2023/05/04 20:47:14 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	explaination:
	int i: creates an variable named i
	i = 0: adds an value to the variable
	while: checks if it is an alphabetical character or not
	if: Check if character is not alphabetical
*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
