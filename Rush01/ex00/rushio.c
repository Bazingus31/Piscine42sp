/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 11:42:09 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 20:23:28 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "string.h"

int		is_empty_char(char c)
{
	return (c == ' ');
}

int		*ft_split_atoi(char *str)
{
	int i;
	int j;
	int *input;

	input = (int*)malloc(16 * sizeof(int));
	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		while (is_empty_char(str[j]) && str[j] != '\0')
			j++;
		if (str[j] >= '1' && str[j] <= '4' && i < 16)
		{
			input[i] = str[j] - '0';
			i++;
		}
		else
			return (0);
		j++;
	}
	if (j != 31)
		return (0);
	return (input);
}

int		get_inputs_from_args(char *args, int **columns, int **rows)
{
	int i;
	int *input;

	input = ft_split_atoi(args);
	if (input == 0)
	{
		return (0);
	}
	i = 0;
	while (i < 16)
	{
		if (i / 4 <= 1)
		{
			columns[i / 4][i % 4] = input[i];
		}
		else if (i / 4 <= 3)
		{
			rows[(i / 4) - 2][i % 4] = input[i];
		}
		i++;
	}
	return (1);
}

void	print_matrix(int **matrix, int row_count, int column_count)
{
	int i;
	int j;

	i = 0;
	while (i < row_count)
	{
		j = 0;
		while (j < column_count)
		{
			ft_putchar(matrix[i][j] + '0');
			if (j < column_count - 1)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
