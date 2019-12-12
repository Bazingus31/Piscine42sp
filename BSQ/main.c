/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 14:57:33 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/11 21:56:00 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "global.h"
#include "ft.h"
#include "matrix_reading.h"
#include "bsq_solution.h"
#include "clean_variables.h"

void	print_matrix(void)
{
	int row;
	int	col;

	row = 0;
	while (row < ft_atoi(g_info_row))
	{
		col = 0;
		while (g_tab_matrix[row][col] != '\0')
		{
			ft_putchar(g_tab_matrix[row][col]);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		ret;
	int		opening;
	char	reading[1000];
	int		a;

	i = 1;
	a = argc;
	while (i < argc)
	{
		opening = open(argv[i], O_RDONLY);
		ret = read(opening, &reading, 1000);
		read_matrix(reading);
		transpose_matrix();
		solve_bsq();
		find_index();
		ft_putchar('\n');
		clean_variables();
		i++;
	}
	return (0);
}
