/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical_element.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:18:07 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/01 16:18:38 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGICAL_ELEMENT_H
# define LOGICAL_ELEMENT_H

void restrict_element(int **matrix, int row, int col);
void select_element(int layer, int ***matrix, int row, int col);

#endif
