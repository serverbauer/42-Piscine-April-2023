/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:03:13 by fhess             #+#    #+#             */
/*   Updated: 2023/05/06 16:38:49 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	/*

			COLUMN 0 | COLUMN 1 | COLUMN 2
	ROW 0 |	   1		  5			9
	ROW 1 |	   8		  2		    0

	*/
	int matrix[2][3] = {{1, 5, 9}, {8, 2, 0}};

	printf("%i\n", matrix[0][2]);

	/*

			COLUMN 0 | COLUMN 1 | COLUMN 2
	ROW 0 |	   1		  5			9
	ROW 1 |	   8		  2		    0

	*/
	int matrix2[2][3] = {{1, 5, 9}, {8, 2, 0}};
	matrix2[0][0] = 5;

	printf("%i\n\n", matrix2[0][0]);

	/*

			COLUMN 0 | COLUMN 1 | COLUMN 2
	ROW 0 |	   1		  5			9
	ROW 1 |	   8		  2		    0

	*/
	int matrix3[2][3] = {{1, 5, 9}, {8, 2, 0}};

	int i;
	int	j;

	i = 0;
	while (i < 2)
	{
  		j = 0;
  		while (j < 3)
		{
    		printf("%d ", matrix3[i][j]);
    		j++;
  		}
		printf("\n");
  		i++;
	}
	return (0);
}
