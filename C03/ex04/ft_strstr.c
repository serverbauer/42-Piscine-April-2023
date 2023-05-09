/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:17:23 by fhess             #+#    #+#             */
/*   Updated: 2023/05/08 19:16:01 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	int i & int j; = diese gehen durch die einzelnen buchstaben zum vergleichen:
	        	  i
	index:  0  1  2  3  4  5  6  7  8  9  10  11  12  ...
	char:   F  i  r  s  t  \0

	source
			j
	index:  0  1  2  3  4  5  6
	char:   S  e  c  o  n  d  \0

	if = Die if-Schleife prüft, ob das nächste Zeichen in der Variable to_find
	ein Nullzeichen ist. Wenn ja, bedeutet dies, dass wir das Ende des zu
	suchenden Strings erreicht haben und wir haben das Vorkommen gefunden.
	In diesem Fall geben wir den Zeiger auf die aktuelle Position im
	ursprünglichen String zurück, an der wir das Vorkommen gefunden haben.

	return (0); = wenn kein to_find gefunden wird, wird NULL returnt.
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    assert(strcmp(ft_strstr(str1, to_find1), "world!") == 0);

    char str2[] = "This is a test";
    char to_find2[] = "is";
    assert(strcmp(ft_strstr(str2, to_find2), "is is a test") == 0);

    char str3[] = "This is a test";
    char to_find3[] = "test";
    assert(strcmp(ft_strstr(str3, to_find3), "test") == 0);

    char str4[] = "This is a test";
    char to_find4[] = "not found";
    assert(ft_strstr(str4, to_find4) == NULL);

    char str5[] = "";
    char to_find5[] = "";
    assert(strcmp(ft_strstr(str5, to_find5), "") == 0);

    printf("All tests passed!\n");
    return (0);
}
*/
