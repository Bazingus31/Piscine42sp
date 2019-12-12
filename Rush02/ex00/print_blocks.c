/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_blocks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:48:05 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/08 19:24:49 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "find_break.h"

void	find_word(char *str);

void	print_power(int size, int i, char *block)
{
	int		diff;
	int		count;
	char	power[1000];

	if (block[0] == '0' && block[1] == '0' && block[2] == '0')
		return ;
	diff = size - i;
	count = 1;
	power[0] = '1';
	while (count < diff)
	{
		power[count] = '0';
		count++;
	}
	power[count] = '\0';
	if (ft_strlen(power) != 1)
		find_word(power);
}

void	print_hundred(char *str)
{
	char auxblock[3];

	auxblock[0] = str[0];
	auxblock[1] = '\0';
	find_word(auxblock);
	find_word("100");
}

void	print_teens(char *str)
{
	char auxblock[3];

	auxblock[0] = str[1];
	auxblock[1] = str[2];
	auxblock[2] = '\0';
	find_word(auxblock);
}

void	print_ntys(char *str)
{
	char auxblock[3];

	auxblock[0] = str[1];
	auxblock[1] = '0';
	auxblock[2] = '\0';
	find_word(auxblock);
}

void	print_unit(char *str)
{
	char auxblock[3];

	auxblock[0] = str[2];
	auxblock[1] = '\0';
	find_word(auxblock);
}
