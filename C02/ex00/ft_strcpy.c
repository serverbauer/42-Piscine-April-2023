/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:57:11 by fhess             #+#    #+#             */
/*   Updated: 2023/05/04 16:08:11 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	explaination:
	i = 0: initialize loop counter
	while: While the end of 'src' is not reached, copy the current character
	from 'src' to 'dest'
    characters is not exceeded, copy the current character from 'src' to 'dest'
	i++: Increment loop counter
	dest[i] = '\0': // Terminate 'dest' with '\0'
	return (dest): Return 'dest'
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
