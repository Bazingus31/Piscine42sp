/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:59:05 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/11 21:51:14 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "ft.h"
#include "bsq_solution.h"

int		ft_atoi(char *str)
{
	int res;
	int i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void	retranspose(int max, int row, int col)
{
	int auxmax1;
	int auxmax2;
	int auxr;
	int auxc;

	auxmax1 = max;
	auxr = row;
	while (auxmax1 > 0)
	{
		auxmax2 = max;
		auxc = col;
		while (auxmax2 > 0)
		{
			g_tab_matrix[auxr][auxc] = g_info_char[0];
			auxc--;
			auxmax2--;
		}
		auxr--;
		auxmax1--;
	}
	print_matrix();
}

void	find_index(void)
{
	int max;
	int row;
	int	col;
	int r;
	int c;

	max = 0;
	row = 0;
	while (row < ft_atoi(g_info_row))
	{
		col = 0;
		while (col < ft_length(g_tab_matrix[0]))
		{
			if (g_sol_mat[row][col] > max)
			{
				max = g_sol_mat[row][col];
				r = row;
				c = col;
			}
			col++;
		}
		row++;
	}
	retranspose(max, r, c);
}

void	solve_bsq(void)
{
	int row;
	int col;

	row = 0;
	while (row < ft_atoi(g_info_row))
	{
		col = 0;
		while (col < ft_length(g_tab_matrix[0]))
		{
			if (row == 0 || col == 0)
				g_sol_mat[row][col] = g_transposed_matrix[row][col];
			else if (g_transposed_matrix[row][col] == 0)
				g_sol_mat[row][col] = 0;
			else
				g_sol_mat[row][col] = g_transposed_matrix[row][col]
					+ ft_min(g_sol_mat[row][col - 1],
							g_sol_mat[row - 1][col],
							g_sol_mat[row - 1][col - 1]);
			col++;
		}
		row++;
	}
}

void	transpose_matrix(void)
{
	int row;
	int word;

	row = 0;
	while (row < ft_atoi(g_info_row))
	{
		word = 0;
		while (g_tab_matrix[row][word] != '\0')
		{
			if (g_tab_matrix[row][word] == g_info_char[2])
				g_transposed_matrix[row][word] = 1;
			else if (g_tab_matrix[row][word] == g_info_char[1])
				g_transposed_matrix[row][word] = 0;
			word++;
		}
		row++;
	}
}
