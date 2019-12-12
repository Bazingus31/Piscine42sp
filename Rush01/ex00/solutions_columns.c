/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solutions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:03:55 by achristo          #+#    #+#             */
/*   Updated: 2019/12/01 17:35:46 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logical_element.h"

void	solve_col_one(int ***matrix, int is_down, int column)
{
	if (is_down)
	{
		select_element(3, matrix, 3, column);
	}
	else
	{
		select_element(3, matrix, 0, column);
	}
}

void	solve_col_two(int ***matrix, int is_down, int column)
{
	if (is_down)
	{
		restrict_element(matrix[3], 3, column);
	}
	else
	{
		restrict_element(matrix[3], 0, column);
	}
}

void	solve_col_three(int ***matrix, int is_down, int column)
{
	if (is_down)
	{
		restrict_element(matrix[2], 3, column);
		restrict_element(matrix[3], 2, column);
		restrict_element(matrix[3], 3, column);
	}
	else
	{
		restrict_element(matrix[2], 0, column);
		restrict_element(matrix[3], 0, column);
		restrict_element(matrix[3], 1, column);
	}
}

void	solve_col_four(int ***matrix, int is_down, int column)
{
	if (is_down)
	{
		select_element(0, matrix, 3, column);
		select_element(1, matrix, 2, column);
		select_element(2, matrix, 1, column);
		select_element(3, matrix, 0, column);
	}
	else
	{
		select_element(0, matrix, 0, column);
		select_element(1, matrix, 1, column);
		select_element(2, matrix, 2, column);
		select_element(3, matrix, 3, column);
	}
}

void	solve_column(int ***matrix, int coln, int is_down, int column)
{
	if (coln == 1)
		solve_col_one(matrix, is_down, column);
	else if (coln == 2)
		solve_col_two(matrix, is_down, column);
	else if (coln == 3)
		solve_col_three(matrix, is_down, column);
	else if (coln == 4)
		solve_col_four(matrix, is_down, column);
}
