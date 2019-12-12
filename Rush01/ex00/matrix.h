/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 14:08:49 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 14:12:35 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

int		**create_matrix(int value, int row_count, int column_count);
void	free_matrix_memory(int **matrix, int row_count);
void	create_main_matrix(int ***matrix);
void	free_main_matrix(int ***matrix);

#endif
