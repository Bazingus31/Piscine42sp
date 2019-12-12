/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_break.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:00:41 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/08 19:15:08 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_BREAK_H
# define FIND_BREAK_H

void	print_block(char *str);
void	treat_print_first_block(char *str, int i, int module);
void	treat_normal_block(char *str, int i, int size);
void	break_number(char *str);

#endif
