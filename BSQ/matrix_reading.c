/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:34:31 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/11 21:56:29 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "ft.h"
#include <stdio.h>

void	break_info(char *str)
{
	int		len;
	int		aux;
	char	info_row_aux[1000];

	aux = 0;
	len = ft_length(str);
	ft_rev_string(str, len);
	while (aux < 3)
	{
		g_info_char[aux] = str[aux];
		aux++;
	}
	aux = 0;
	while (str[aux + 3] != '\n')
	{
		info_row_aux[aux] = str[aux + 3];
		aux++;
	}
	ft_rev_string(info_row_aux, len - 3);
	aux = 0;
	while (info_row_aux[aux] != '\0')
	{
		g_info_row[aux] = info_row_aux[aux];
		aux++;
	}
}

int		break_header(char *str)
{
	int		i;
	char	header[20];

	i = 0;
	while (str[i] != '\n')
	{
		header[i] = str[i];
		i++;
	}
	header[i] = '\0';
	break_info(header);
	return (i);
}

void	read_matrix(char *str)
{
	int		row;
	int		word;
	int		i;

	row = 0;
	i = break_header(str);
	while (str[i + 1] != '\0')
	{
		word = 0;
		while (str[i + 1] != '\n')
		{
			g_tab_matrix[row][word] = str[i + 1];
			i++;
			word++;
		}
		i++;
		row++;
	}
}
