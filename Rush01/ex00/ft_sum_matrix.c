/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:40:33 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 19:41:26 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

int	**ft_sum_matrix(int ***matrix)
{
	int **matrix_result;
	int j;
	int i;
	int k;

	k = 0;
	matrix_result = create_matrix(0, 4, 4);
	while (k < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				matrix_result[i][j] = matrix_result[i][j] + matrix[k][i][j];
				j++;
			}
			i++;
		}
		k++;
	}
	return (matrix_result);
}
