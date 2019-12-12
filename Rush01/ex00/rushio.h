/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 11:58:30 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 19:56:58 by achristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHIO_H
# define RUSHIO_H

int		get_inputs_from_args(char *args, int **columns, int **rows);
int		*ft_split_atoi(char *str);
void	print_matrix(int **matrix, int row_count, int column_count);

#endif
