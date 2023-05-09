/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:36:00 by fhess             #+#    #+#             */
/*   Updated: 2023/05/08 19:06:25 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	int nb; = maximale anzahl an zeichen welche von source and dest

	int i & int j; = "counter", diese gehen durch die einzelnen buchstaben zum
	kopieren und einfügen:
	                       i
	index:  0  1  2  3  4  5  6  7  8  9  10  11  12  ...
	char:   F  i  r  s  t  \0(=neuer wert ["S"])

	source
			j
	index:  0  1  2  3  4  5  6
	char:   S  e  c  o  n  d  \0

	return (dest); = returnt einen pointer zu dest

*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <assert.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "world!";
	char	*result;

	// Testfall 1: src an nicht-leeres dest anhängen (nb < strlen(src))
	result = ft_strncat(dest, src, 3);
	assert(strcmp(result, "Hello, wor") == 0);

	// Testfall 2: src an nicht-leeres dest anhängen (nb > strlen(src))
	strcpy(dest, "Hello, ");
	result = ft_strncat(dest, src, 10);
	assert(strcmp(result, "Hello, world!") == 0);

	// Testfall 3: src an leeres dest anhängen (nb > strlen(src))
	strcpy(dest, "");
	result = ft_strncat(dest, src, 10);
	assert(strcmp(result, "world!") == 0);

	// Testfall 4: leeres src an dest anhängen
	strcpy(dest, "Hello, ");
	strcpy(src, "");
	result = ft_strncat(dest, src, 10);
	assert(strcmp(result, "Hello, ") == 0);

	// Testfall 5: nb ist 0
	strcpy(dest, "Hello, ");
	strcpy(src, "world!");
	result = ft_strncat(dest, src, 0);
	assert(strcmp(result, "Hello, ") == 0);

	printf("Alle Tests erfolgreich bestanden.\n");

	return (0);
}
*/
/*
#include <stdio.h>

int	main()
{
	char	desti[1024] = "First";
	char	source[] = "Second";
	unsigned int nb = 5;

	ft_strncat(desti, source, nb);
	printf("Result: %s\n", desti);
	return (0);
}
*/
