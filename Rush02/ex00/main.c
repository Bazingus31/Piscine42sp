/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeOpen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 11:47:44 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/08 21:30:42 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "ft.h"
#include "find_break.h"

char g_arr_number[1000][1000];
char g_arr_word[1000][1000];

void	find_word(char *str)
{
	int p;

	p = 0;
	while (g_arr_number[p] != '\0')
	{
		if (ft_strcmp(g_arr_number[p], str) == 0)
		{
			ft_putstr(g_arr_word[p]);
			ft_putchar(' ');
			return ;
		}
		else
			p++;
	}
}

void	read_dict(char *str)
{
	int p;
	int q;

	p = 0;
	while (*str != '\0')
	{
		q = 0;
		while (*str != ' ' && *str != ':')
		{
			g_arr_number[p][q] = *str;
			str++;
			q++;
		}
		while (*str == ' ' || *str == ':')
			str++;
		q = 0;
		while (*str != '\n')
		{
			g_arr_word[p][q] = *str;
			str++;
			q++;
		}
		str++;
		p++;
	}
}

int		main(int argc, char **argv)
{
	int		opening;
	int		ret;
	char	reading[1000];

	if (argc != 2)
		ft_putstr("Error\n");
	else if (ft_str_is_numeric(argv[1]) == 0)
		ft_putstr("Error\n");
	else
	{
		opening = open("numbers.dict", O_RDONLY);
		if (opening < 0)
			ft_putstr("Error\n");
		else
		{
			ret = read(opening, &reading, 1000);
			read_dict(reading);
			break_number(argv[1]);
		}
	}
	return (0);
}
