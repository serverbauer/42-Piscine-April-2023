/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:51:39 by fhess             #+#    #+#             */
/*   Updated: 2023/05/09 20:20:33 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Dies ist eine Funktion namens "ft_putchar", die ein einzelnes Zeichen
	auf die Standardausgabe schreibt. Die Funktion verwendet die Funktion
	"write" aus der Header-Datei "unistd.h".

	#include <unistd.h>

	void ft_putchar(char c)
	{
	write(1, &c, 1); // Schreibt das übergebene Zeichen auf die Standardausgabe.
	}

	Dies ist eine Funktion namens "ft_putnbr", die eine ganze Zahl als
	Parameter erhält und diese als Text auf die Standardausgabe schreibt.
	Die Funktion verwendet die Funktion "ft_putchar", um einzelne Zeichen
	auszugeben, und eine Variable namens "long_int", um die übergebene Zahl
	in ein Long-Integer zu konvertieren und so Überläufe bei sehr großen
	Zahlen zu vermeiden.

	void ft_putnbr(int nb)
	{
	long int long_int; // Initialisierung der Variable "long_int" vom
	Typ Long-Integer.

	long_int = nb; // Konvertierung der übergebenen Zahl in ein Long-Integer.
	if (long_int < 0) // Wenn die Zahl negativ ist, gib ein '-' aus und arbeite
	mit dem positiven Wert weiter.
	{
		ft_putchar('-');
		long_int = -long_int;
	}
	if (long_int > 9) // Wenn die Zahl größer als 9 ist, teile sie durch 10 und
	rufe die Funktion rekursiv auf.
	{
		ft_putnbr(long_int / 10);
	}
	ft_putchar(long_int % 10 + '0'); // Gib das letzte Ziffer als Zeichen aus.

*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_int;

	long_int = nb;
	if (long_int < 0)
	{
		ft_putchar('-');
		long_int = -long_int;
	}
	if (long_int > 9)
	{
		ft_putnbr(long_int / 10);
	}
	ft_putchar(long_int % 10 + '0');
}

/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
