/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 14:05:49 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/01 20:52:47 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rushio.h"
#include "matrix.h"
#include "ft_check.h"
#include "ft_choose_solution.h"
#include "ft_sum_matrix.h"
#include "logical.h"
#include "solutions_rows.h"
#include "solutions_columns.h"
#include "check_error.h"
#include "string.h"

void	solve_edges(int ***matrix, int **rows, int **columns)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			solve_column(matrix, columns[i][j], i, j);
			solve_row(matrix, rows[i][j], i, j);
			j++;
		}
		i++;
	}
}

void	solve(int **rows, int **columns)
{
	int ***matrix;
	int **matrix_result;

	matrix = (int***)malloc(4 * sizeof(int**));
	create_main_matrix(matrix);
	solve_edges(matrix, rows, columns);
	check(matrix);
	solve_logical(matrix, rows, columns);
	check(matrix);
	ft_choose_solution(matrix);
	check(matrix);
	matrix_result = ft_sum_matrix(matrix);
	if (check_error(matrix_result, 4, 4) == 1)
	{
		print_matrix(matrix_result, 4, 4);
	}
	else
	{
		ft_putstr("Error\n");
	}
	free_matrix_memory(matrix_result, 4);
	free_main_matrix(matrix);
}

int		main(int argc, char *argv[])
{
	int **columns;
	int **rows;

	columns = create_matrix(0, 2, 4);
	rows = create_matrix(0, 2, 4);
	if (argc == 2)
	{
		if (get_inputs_from_args(argv[1], columns, rows) != 1)
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	solve(rows, columns);
	free_matrix_memory(columns, 2);
	free_matrix_memory(rows, 2);
}
