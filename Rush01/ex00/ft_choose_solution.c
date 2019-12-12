/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_solution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:44:01 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 19:39:22 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "ft_check.h"
#include "logical_element.h"

void	check_solution(int ***matrix, int k, int i, int j)
{
	if (matrix[k][i][j] != 0)
	{
		if (is_single(matrix[k], i, j, 0) != 1)
		{
			select_element(k, matrix, i, j);
		}
		if (is_single(matrix[k], i, j, 1) != 1)
		{
			select_element(k, matrix, i, j);
		}
	}
}

void	ft_choose_solution(int ***matrix)
{
	int k;
	int i;
	int j;

	k = 0;
	while (k < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				check_solution(matrix, k, i, j);
				j++;
			}
			i++;
		}
		k++;
	}
}
