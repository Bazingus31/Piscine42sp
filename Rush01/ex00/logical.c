/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:15:52 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 18:19:59 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "ft_check.h"
#include "logical_element.h"

void	solve_logical_row(int ***matrix, int **rows, int i, int j)
{
	if (rows[i][j] == 2)
	{
		if (i == 0)
		{
			if (matrix[3][j][3] == 4)
				select_element(2, matrix, j, 0);
		}
		else if (matrix[3][j][0] == 4)
		{
			select_element(2, matrix, j, 3);
		}
	}
	if (i == 0)
	{
		if (rows[i][j] == 3 && rows[i][j + 1] == 1 && matrix[2][j][2] == 3)
		{
			select_element(1, matrix, j, 0);
			select_element(0, matrix, j, 1);
		}
	}
	else if (rows[i][j] == 3 && rows[i - 1][j] == 1 && matrix[2][j][1] == 3)
	{
		select_element(1, matrix, j, 3);
		select_element(0, matrix, j, 2);
	}
}

void	solve_logical_column(int ***matrix, int **columns, int i, int j)
{
	if (columns[i][j] == 2)
	{
		if (i == 0)
		{
			if (matrix[3][3][j] == 4)
				select_element(2, matrix, 0, j);
		}
		else if (matrix[3][0][j] == 4)
			select_element(2, matrix, 3, j);
	}
	if (i == 0)
	{
		if (columns[i][j] == 3 && columns[i + 1][j] == 1
				&& matrix[2][2][j] == 3)
		{
			select_element(1, matrix, 0, j);
			select_element(0, matrix, 1, j);
		}
	}
	else if (columns[i][j] == 3 && columns[i - 1][j] == 1
			&& matrix[2][1][j] == 3)
	{
		select_element(1, matrix, 3, j);
		select_element(0, matrix, 2, j);
	}
}

void	solve_logical(int ***matrix, int **rows, int **columns)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			solve_logical_row(matrix, rows, i, j);
			solve_logical_column(matrix, columns, i, j);
			j++;
		}
		i++;
	}
}
