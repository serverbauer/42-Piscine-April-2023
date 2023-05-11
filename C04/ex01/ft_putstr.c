/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:08:39 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 20:14:57 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Dies ist eine Funktion namens "ft_putstr", die einen Zeiger auf einen
	String als Parameter erhält und den Inhalt des Strings auf die
	Standardausgabe schreibt.
	Die Funktion verwendet eine Variable namens "char_count", um die Anzahl der
	bereits ausgegebenen Zeichen zu zählen.

	int char_count; // Initialisierung der Variablen "char_count" mit dem Wert 0.

	while (str[char_count] != '\0') // Die Schleife wird so lange ausgeführt,
	bis das Ende des Strings erreicht ist (d.h. das Nullzeichen '\0' erreicht
	wurde).

	write(1, &str[char_count], 1); // Schreibt das aktuelle Zeichen aus dem
	String auf die Standardausgabe.

	char_count++; // Erhöht den Zähler für ausgegebene Zeichen um 1.

*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
	{
		write(1, &str[char_count], 1);
		char_count++;
	}
}

/*
int	main(void)
{
	char	line1[] = "        :::      ::::::::";
	char	line2[] = "      :+:      :+:    :+:";
	char	line3[] = "    +:+ +:+         +:+  ";
	char	line4[] = "  +#+  +:+       +#+     ";
	char	line5[] = "+#+#+#+#+#+   +#+        ";
	char	line6[] = "     #+#    #+#          ";
	char	line7[] = "    ###   ########.fr    ";

	ft_putstr(line1);
	write(1, "\n", 1);
	ft_putstr(line2);
	write(1, "\n", 1);
	ft_putstr(line3);
	write(1, "\n", 1);
	ft_putstr(line4);
	write(1, "\n", 1);
	ft_putstr(line5);
	write(1, "\n", 1);
	ft_putstr(line6);
	write(1, "\n", 1);
	ft_putstr(line7);
	write(1, "\n", 1);
	return (0);
}
*/
