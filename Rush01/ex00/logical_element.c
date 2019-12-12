/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical_element.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:16:05 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 16:17:22 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	restrict_element(int **matrix, int row, int col)
{
	matrix[row][col] = 0;
}

void	select_element(int layer, int ***matrix, int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((i == row && j != col) || (i != row && j == col))
				matrix[layer][i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (i != layer)
		{
			restrict_element(matrix[i], row, col);
		}
		i++;
	}
}
