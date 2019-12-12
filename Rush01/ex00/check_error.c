/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 20:07:26 by achristo          #+#    #+#             */
/*   Updated: 2019/12/01 20:09:11 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_error(int **matrix, int row_count, int column_count)
{
	int i;
	int j;

	i = 0;
	while (i < row_count)
	{
		j = 0;
		while (j < column_count)
		{
			if (matrix[i][j] == 0 || matrix[i][j] > 4)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
