/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:48:33 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 20:11:00 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	int char_counter; = ist da um durch jeden character zu gehen

	char_counter = 0; = auf 0 gesetzt um am anfang zu beginnen für das zählen

	while (str[char_counter] != '\0') = überprüft das
	der counter eh nicht beim 0 Terminator ist

	char_counter++; = erhöt den Wert des Counters um 1

	return (char_counter); = gibt die anzahl der character
	zurück
*/
int	ft_strlen(char *str)
{
	int	char_counter;

	char_counter = 0;
	while (str[char_counter] != '\0')
	{
		char_counter++;
	}
	return (char_counter);
}
/*
#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    int len1 = ft_strlen(str1);
    printf("Länge von \"%s\": %d\n", str1, len1);

    char str2[] = "Dies ist ein Test";
    int len2 = ft_strlen(str2);
    printf("Länge von \"%s\": %d\n", str2, len2);

    char str3[] = "";
    int len3 = ft_strlen(str3);
    printf("Länge von \"%s\": %d\n", str3, len3);


    char str4[] = " ";
    int len4 = ft_strlen(str4);
    printf("Länge von \"%s\": %d\n", str4, len4);

    return 0;
}
*/
