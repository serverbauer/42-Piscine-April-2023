/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:51:39 by fhess             #+#    #+#             */
/*   Updated: 2023/05/10 18:23:26 by fhess            ###   ########.fr       */
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

int	base_seconde_functions(char *base)
{
	int		lenght_base;
	int		i;

	lenght_base = 0;
	while (base[lenght_base] != '\0')
	{
		if (base[lenght_base] == '+' || base[lenght_base] == '-'
			|| lenght_base == 1)
			return (0);
		i = lenght_base + 1;
		while (base[i])
		{
			if (base[i] == base[lenght_base])
				return (0);
			i++;
		}
		lenght_base++;
	}
	return (lenght_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght_base;
	char	c;

	lenght_base = base_seconde_functions(base);
	if (lenght_base < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= lenght_base)
		ft_putnbr_base(nbr / lenght_base, base);
	c = base[nbr % lenght_base];
	write(1, &c, 1);
}

int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "0123456789abcdef";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	nbr = -42;
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	nbr = 123456789;
	base = "01";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	base = "01234567";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	base = "poneyvif";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	return (0);
}

/*
void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	char	c;

	base_len = 0;
	while (base[base_len] != '\0')
	{
		if (base[base_len] == '+' || base[base_len] == '-' || base_len == 1)
			return ;
		i = base_len + 1;
		while (base[i])
		{
			if (base[i] == base[base_len])
				return ;
			i++;
		}
		base_len++;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	c = base[nbr % base_len];
	write(1, &c, 1);
}
*/
