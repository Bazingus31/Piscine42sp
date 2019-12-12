/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_variables.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 21:27:15 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/11 21:53:46 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void	clean_char(void)
{
	int i;

	i = 0;
	while (i < 1000)
	{
		g_info_char[i] = '\0';
		g_info_row[i] = '\0';
		i++;
	}
}

void	clean_char_matrix(void)
{
	int i;
	int j;

	i = 0;
	while (i < 1000)
	{
		j = 0;
		while (j < 1000)
		{
			g_tab_matrix[i][j] = '\0';
			j++;
		}
		i++;
	}
}

void	clean_int_matrix(void)
{
	int i;
	int j;

	i = 0;
	while (i < 1000)
	{
		j = 0;
		while (j < 1000)
		{
			g_transposed_matrix[i][j] = 0;
			g_sol_mat[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	clean_variables(void)
{
	clean_char();
	clean_char_matrix();
	clean_int_matrix();
}
