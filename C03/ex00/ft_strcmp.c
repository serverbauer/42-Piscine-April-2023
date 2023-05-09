/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:18:50 by fhess             #+#    #+#             */
/*   Updated: 2023/05/08 18:01:28 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	unsinged int i; = deshalb da nur positive werte überprüft werden und
	strings nur positiv sein können

	i = 0; = deshalb da wir alle buchstaben einzeln durchgehen

	while = um das ganze zu loopen, es wird auch gleich überprüft ob die strings
	gleich sind, und s1[i] != '\0' prüft, ob das aktuelle Zeichen in
	der Zeichenkette s1 ungleich dem Nullzeichen \0 ist.

	i++; = um den Wert von i um 1 zu erhöhen das der nächste Buchstabe
	kontrolliert wird

	return = um im ASCII Code auszugeben welche Position anders ist.

*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <assert.h>

int main(void)
{
    // Testfall 1: Identische Zeichenketten
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    int result = ft_strcmp(str1, str2);
    assert(result == 0);

    // Testfall 2: Unterschiedliche Längen
    char str3[] = "Hello, world!";
    char str4[] = "Hello!";
    result = ft_strcmp(str3, str4);
    assert(result > 0);

    // Testfall 3: Unterschiedliche Buchstaben
    char str5[] = "abc";
    char str6[] = "def";
    result = ft_strcmp(str5, str6);
    assert(result < 0);

    printf("Alle Tests erfolgreich bestanden.\n");

    return 0;
}
*/
