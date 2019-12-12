/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:02:45 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 18:35:40 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**create_matrix(int value, int row_count, int column_count)
{
	int i;
	int j;
	int	**matrix;

	matrix = (int**)malloc(row_count * sizeof(int*));
	i = 0;
	while (i < row_count)
	{
		j = 0;
		matrix[i] = (int*)malloc(column_count * sizeof(int));
		while (j < column_count)
		{
			matrix[i][j] = value;
			j++;
		}
		i++;
	}
	return (matrix);
}

void	free_matrix_memory(int **matrix, int row_count)
{
	int i;

	i = 0;
	while (i < row_count)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	create_main_matrix(int ***matrix)
{
	matrix[0] = create_matrix(1, 4, 4);
	matrix[1] = create_matrix(2, 4, 4);
	matrix[2] = create_matrix(3, 4, 4);
	matrix[3] = create_matrix(4, 4, 4);
}

void	free_main_matrix(int ***matrix)
{
	int k;

	k = 0;
	while (k < 4)
	{
		free_matrix_memory(matrix[k], 4);
		k++;
	}
	free(matrix);
}
