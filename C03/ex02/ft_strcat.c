/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:36:00 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 16:14:40 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	dest++ & src++: Diese gehen durch die einzelnen Buchstaben zum
    Kopieren und Einfügen:
                           dest_len
    index:  0  1  2  3  4  5  6  7  8  9  10  11  12  ...
    char:   F  i  r  s  t  \0(=neuer Wert ["S"])


    // Ermitteln der Länge der Zielzeichenkette
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    source
            i
    index:  0  1  2  3  4  5  6
    char:   S  e  c  o  n  d  \0

    // Anhängen der Quellzeichenkette an die Zielzeichenkette
    while (src[i] != '\0') {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    // Hinzufügen eines Null-Terminators am Ende der verketteten Zeichenfolge
    dest[dest_len] = '\0';

    // return (dest): Gibt einen Pointer zu dest zurück
    return dest;
}
*/

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
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

/*
Old Code

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
*/
