/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:32:27 by fhess             #+#    #+#             */
/*   Updated: 2023/04/27 15:44:01 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 27);
}

int	main(void)
{
	maff_alpha();
	return (0);
}
