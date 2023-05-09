/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:36:00 by fhess             #+#    #+#             */
/*   Updated: 2023/05/08 18:57:49 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	dest++ & src++ = diese gehen durch die einzelnen buchstaben zum
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

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void)
{
    // Testfall 1: src an leeres dest anhängen
    char dest1[50] = "";
    char src1[] = "Hello, world!";
    ft_strcat(dest1, src1);
    assert(strcmp(dest1, src1) == 0);

    // Testfall 2: src an nicht-leeres dest anhängen
    char dest2[50] = "Hello, ";
    char src2[] = "world!";
    ft_strcat(dest2, src2);
    assert(strcmp(dest2, "Hello, world!") == 0);

    // Testfall 3: leere Zeichenkette an nicht-leeres dest anhängen
    char dest3[50] = "Hello, world!";
    char src3[] = "";
    ft_strcat(dest3, src3);
    assert(strcmp(dest3, "Hello, world!") == 0);

    printf("Alle Tests erfolgreich bestanden.\n");

    return 0;
}
*/
/*
#include <stdio.h>

int	main()
{
	char	desti[1024] = "First";
	char	source[] = "Second";

	ft_strcat(desti, source);
	printf("Result: %s\n", desti);
	return (0);
}
*/
