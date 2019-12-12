/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solutions_rows.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:36:04 by achristo          #+#    #+#             */
/*   Updated: 2019/12/01 17:46:23 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logical_element.h"

void	solve_row_one(int ***matrix, int is_right, int row)
{
	if (is_right)
	{
		select_element(3, matrix, row, 3);
	}
	else
	{
		select_element(3, matrix, row, 0);
	}
}

void	solve_row_two(int ***matrix, int is_right, int row)
{
	if (is_right)
	{
		restrict_element(matrix[3], row, 3);
	}
	else
	{
		restrict_element(matrix[3], row, 0);
	}
}

void	solve_row_three(int ***matrix, int is_right, int row)
{
	if (is_right)
	{
		restrict_element(matrix[2], row, 3);
		restrict_element(matrix[3], row, 2);
		restrict_element(matrix[3], row, 3);
	}
	else
	{
		restrict_element(matrix[2], row, 0);
		restrict_element(matrix[3], row, 0);
		restrict_element(matrix[3], row, 1);
	}
}

void	solve_row_four(int ***matrix, int is_right, int row)
{
	if (is_right)
	{
		select_element(0, matrix, row, 3);
		select_element(1, matrix, row, 2);
		select_element(2, matrix, row, 1);
		select_element(3, matrix, row, 0);
	}
	else
	{
		select_element(0, matrix, row, 0);
		select_element(1, matrix, row, 1);
		select_element(2, matrix, row, 2);
		select_element(3, matrix, row, 3);
	}
}

void	solve_row(int ***matrix, int rown, int is_right, int row)
{
	if (rown == 1)
		solve_row_one(matrix, is_right, row);
	else if (rown == 2)
		solve_row_two(matrix, is_right, row);
	else if (rown == 3)
		solve_row_three(matrix, is_right, row);
	else if (rown == 4)
		solve_row_four(matrix, is_right, row);
}
