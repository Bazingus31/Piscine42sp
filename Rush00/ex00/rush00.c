/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:21:18 by gde-matt          #+#    #+#             */
/*   Updated: 2019/11/24 18:43:13 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	full_line(int x)
{
	int coluna;

	coluna = 1;
	while (coluna <= x)
	{
		if (coluna == 1 || coluna == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		coluna++;
	}
}

void	empty_line(int x)
{
	int coluna;

	coluna = 1;
	while (coluna <= x)
	{
		if (coluna == 1 || coluna == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		coluna++;
	}
}

void	rush(int x, int y)
{
	int linha;

	linha = 1;
	if (x < 1 || y < 1)
	{
		ft_putchar('!');
	}
	else
	{
		while (linha <= y)
		{
			if (linha == 1 || linha == y)
			{
				full_line(x);
			}
			else
			{
				empty_line(x);
			}
			ft_putchar('\n');
			linha++;
		}
	}
}
