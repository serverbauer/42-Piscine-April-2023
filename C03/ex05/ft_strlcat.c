/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:17:23 by fhess             #+#    #+#             */
/*   Updated: 2023/05/08 21:20:57 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Die Funktion strlcat fügt die ersten size - strlen(dest) - 1 Zeichen von src an
dest an und gibt die Gesamtlänge von dest zurück. Wenn dest und src
zusammen mehr als size Zeichen enthalten, gibt die Funktion size + strlen(src)
zurück.

Die Funktion verwendet die Variablen nb, i und j.

nb speichert die maximale Anzahl an Zeichen,
die von source und dest kopiert werden können, um Pufferüberläufe zu vermeiden.

i und j sind
Zähler für die Indizes der Buchstaben in den Strings.

Beispiel:
char dest[20] = "Hello";
char src[10] = " world!";
unsigned int result = ft_strlcat(dest, src, 15);
printf("%s\n", dest); // Ausgabe: "Hello world!"
printf("%u\n", result); // Ausgabe: 12 (Länge von "Hello world!")
Die Funktion gibt immer einen Pointer auf dest zurück.
*/

#include <assert.h>
#include <string.h>

void	ft_copy_src_to_dest(char *dest, char *src, unsigned int size,
unsigned int dest_lengh)
{
	unsigned int	i;
	unsigned int	j;

	i = dest_lengh;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		j++;
	}
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_lengh;

	i = 0;
	dest_lengh = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	dest_lengh = i;
	ft_copy_src_to_dest(dest, src, size, dest_lengh);
	return (dest_lengh + ft_strlen(src));
}

/*
int main(void)
{
    char dest[100] = "hello";
    char src[100] = "world";
    unsigned int size = 100;

    // Test case 1: basic functionality
    assert(ft_strlcat(dest, src, size) == 10);
    assert(strcmp(dest, "helloworld") == 0);

    // Test case 2: destination buffer too small
    char dest2[5] = "hello";
    assert(ft_strlcat(dest2, src, 5) == 10);
    assert(strcmp(dest2, "hello") == 0);

    // Test case 3: empty source string
    char dest3[100] = "hello";
    char src3[1] = "";
    assert(ft_strlcat(dest3, src3, size) == 5);
    assert(strcmp(dest3, "hello") == 0);

    // Test case 4: empty destination string
    char dest4[1] = "";
    assert(ft_strlcat(dest4, src, size) == 5);
    assert(strcmp(dest4, "world") == 0);

    // Test case 5: source string larger than size
    char dest5[100] = "hello";
    char src5[100] = "world1234567890";
    assert(ft_strlcat(dest5, src5, 10) == 15);
    assert(strcmp(dest5, "helloworld") == 0);

    return 0;
}
*/

/*
void	ft_copy_src_to_dest(char *dest, char *src, unsigned int size,
unsigned int dest_lengh)
{
	unsigned int	i;
	unsigned int	j;

	i = dest_lengh;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i == size || (dest_lengh > 0 && dest_lengh + j >= size) || !src[0])
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		j++;
	}
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	dest_length = i;
	src_length = ft_strlen(src);
	if (dest_length < size)
	{
		ft_copy_src_to_dest(dest, src, size, dest_length);
	}
	return (dest_length + src_length);
}

#include <assert.h>
#include <string.h>

int main(void)
{
    char dest[100] = "hello";
    char src[100] = "world";
    unsigned int size = 100;

    // Test case 1: basic functionality
    assert(ft_strlcat(dest, src, size) == 10);
    assert(strcmp(dest, "helloworld") == 0);

    // Test case 2: destination buffer too small
    char dest2[5] = "hello";
    assert(ft_strlcat(dest2, src, 5) == 10);
    assert(strcmp(dest2, "hello") == 0);

    // Test case 3: empty source string
    char dest3[100] = "hello";
    char src3[1] = "";
    assert(ft_strlcat(dest3, src3, size) == 5);
    assert(strcmp(dest3, "hello") == 0);

    // Test case 4: empty destination string
    char dest4[1] = "";
    assert(ft_strlcat(dest4, src, size) == 5);
    assert(strcmp(dest4, "world") == 0);

    // Test case 5: source string larger than size
    char dest5[100] = "hello";
    char src5[100] = "world1234567890";
    assert(ft_strlcat(dest5, src5, 10) == 15);
    assert(strcmp(dest5, "helloworld") == 0);

    return 0;
}
*/
