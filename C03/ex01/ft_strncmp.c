/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:12:11 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 16:13:27 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	while = Dies ist eine Schleife, die so lange ausgeführt wird, bis n auf 0
	gesetzt wird. Bei jedem Durchlauf wird n um eins verringert.

	if = In dieser Bedingung wird geprüft, ob der aktuelle Buchstabe in s1
	ungleich dem aktuellen Buchstaben in s2 ist oder ob entweder s1 oder s2 NULL
	 sind. Wenn das der Fall ist, gibt die Funktion die Differenz der
	 ASCII-Codes der beiden Buchstaben zurück.

	s1++; % s2++; = Diese beiden Zeilen erhöhen die Zeiger s1 und s2 jeweils um
	eins, um den nächsten Buchstaben in jeder Zeichenkette zu vergleichen.

	return (0); = wird ausgeführt wenn alles verglichen wurde und korrekt ist,
	ohne am Ende der Funktion würde sie bei diesem Szenario keinen Wert
	zurückgeben

*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2 || !(*s1 && *s2))
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

/*

#include <stdio.h>
#include <assert.h>

int main(void)
{
    // Testfall 1: Identische Zeichenketten
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    int result = ft_strncmp(str1, str2, 6);
    assert(result == 0);

    // Testfall 2: Unterschiedliche Längen
    char str3[] = "Hello, world!";
    char str4[] = "Hello!";
    result = ft_strncmp(str3, str4, 6);
    assert(result > 0);

    // Testfall 3: Unterschiedliche Buchstaben
    char str5[] = "abc";
    char str6[] = "def";
    result = ft_strncmp(str5, str6, 1);
    assert(result < 0);

    // Testfall 4: Eine leere Zeichenkette
    char str7[] = "";
    char str8[] = "Hello!";
    result = ft_strncmp(str7, str8, 3);
    assert(result < 0);

    printf("Alle Tests erfolgreich bestanden.\n");

    return 0;
}
*/
