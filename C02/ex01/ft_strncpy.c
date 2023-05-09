/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:30:44 by fhess             #+#    #+#             */
/*   Updated: 2023/05/04 14:52:52 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	explaination:
	i = 0: initialize loop counter
	while: While the end of 'src' is not reached and the maximum number of 'n'
    characters is not exceeded, copy the current character from 'src' to 'dest'
	i++: Increment loop counter
	2nd while: If the loop was interrupted due to the condition
	in the first loop, fill the rest of 'dest' with '\0'
	return (dest): Return 'dest'
*/

//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[15];

	strncpy(dest, src, 5);
	printf("Using strncpy: %s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("Using ft_strncpy: %s\n", dest);
	return (0);
}
*/
