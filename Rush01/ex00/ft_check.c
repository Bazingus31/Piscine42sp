/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:17:42 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 19:37:56 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logical_element.h"

int		is_single(int **matrix, int row, int column, int is_row)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (is_row != 0)
		{
			if (i != column && matrix[row][i] != 0)
			{
				return (0);
			}
		}
		else
		{
			if (i != row && matrix[i][column] != 0)
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		check_layer(int ***matrix, int k)
{
	int i;
	int j;
	int is_row;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			is_row = 0;
			while (is_row <= 1)
			{
				if (is_single(matrix[k], i, j, is_row))
					select_element(k, matrix, i, j);
				is_row++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check(int ***matrix)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (check_layer(matrix, k) == 0)
		{
			return (0);
		}
		k++;
	}
	return (1);
}
