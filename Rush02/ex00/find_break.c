/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_break.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:54:44 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/08 19:22:05 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "print_blocks.h"

void	find_word(char *str);

void	print_block(char *str)
{
	if (str[0] != '0')
		print_hundred(str);
	if (str[1] == '1')
		print_teens(str);
	if (str[1] >= '2')
		print_ntys(str);
	if (str[2] != '0' && str[1] != '1')
		print_unit(str);
}

void	treat_print_first_block(char *str, int i, int module)
{
	char	block[4];

	if (module == 2)
	{
		block[0] = '0';
		block[1] = str[0];
		block[2] = str[1];
		block[3] = '\0';
	}
	else
	{
		block[0] = '0';
		block[1] = '0';
		block[2] = str[0];
		block[3] = '\0';
	}
	if (block[0] == '0' && block[1] == '0' && block[2] == '0')
		find_word("0");
	else
	{
		print_block(block);
		print_power(ft_strlen(str), i - 1, block);
	}
}

void	treat_normal_block(char *str, int i, int size)
{
	int		k;
	char	block[3];

	while (str[i] != '\0')
	{
		k = 0;
		while (k < 3)
		{
			block[k] = str[i];
			k++;
			i++;
		}
		print_block(block);
		print_power(size, i - 1, block);
	}
}

void	break_number(char *str)
{
	int		size;
	int		module;
	int		i;

	i = 0;
	size = ft_strlen(str);
	module = size % 3;
	if (module != 0)
	{
		i = module;
		treat_print_first_block(str, i, module);
	}
	treat_normal_block(str, i, size);
	ft_putchar('\n');
}
