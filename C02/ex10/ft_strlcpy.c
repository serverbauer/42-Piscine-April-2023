/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:06:22 by fhess             #+#    #+#             */
/*   Updated: 2023/05/04 21:10:00 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   This function takes a string `str` as input and converts all uppercase
   letters to lowercase by adding 32 to their ASCII code. The function
   returns a pointer to the modified `str`.
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1 && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
