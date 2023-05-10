/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:21:51 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 22:12:17 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Diese Funktion wandelt einen String in einen Integer-Wert um.
	Der String kann eine beliebige Anzahl an Leerzeichen enthalten,
	gefolgt von einer beliebigen Anzahl an Plus- und Minus-Zeichen.
	Das Minus-Zeichen ändert das Vorzeichen des zurückgegebenen Integers
	abhängig von der Anzahl der Minus-Zeichen (ungerade = negativ,
	gerade = positiv).
	Schließlich kann der String aus einer beliebigen Anzahl von Ziffern
	der Basis 10 bestehen.
	Die Funktion liest den String bis er nicht mehr den oben genannten Regeln
	entspricht
	und gibt dann den bis dahin gefundenen Integer-Wert zurück.
	Es wird keine Überlauf- oder Unterlaufprüfung durchgeführt.
	Das Ergebnis kann in diesem Fall undefiniert sein.

	Parameter:

	str: Der umzuwandelnde String.
	Rückgabewert:

	Der umgewandelte Integer-Wert.
	Variablen:

	result: Der berechnete Integer-Wert.
	operator_sign: Das Vorzeichen des zurückgegebenen
	Integer-Wertes (-1 für negativ, 1 für positiv).
	index: Der aktuelle Index im String.


	// Ignoriere führende Leerzeichen
	while (str[index] == ' ')
		index++;

	// Behandle Vorzeichen
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			operator_sign = -1;
		index++;
	}

	// Konvertiere Ziffern
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - 48);
		index++;
	}

	// Berücksichtige Vorzeichen
	return (operator_sign * result);

*/

int	ft_atoi(char *str)
{
	int	result;
	int	operator_sign;
	int	index;

	result = 0;
	operator_sign = 1;
	index = 0;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\t' || str[index] == '\v')
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			operator_sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - 48);
		index++;
	}
	return (operator_sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str = " ---+--+1234ab567";
    int num = ft_atoi(str);
    printf("%d\n", num);
    return (0);
}
*/
