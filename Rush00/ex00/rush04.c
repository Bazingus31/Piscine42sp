/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 12:24:37 by gde-matt          #+#    #+#             */
/*   Updated: 2019/11/24 18:42:17 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	full_line1(int x)
{
	int coluna;

	coluna = 1;
	while (coluna <= x)
	{
		if (coluna == 1)
		{
			ft_putchar('A');
		}
		else if (1 < coluna && coluna < x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
		}
		coluna++;
	}
	ft_putchar('\n');
}

void	full_line2(int x)
{
	int coluna;

	coluna = 1;
	while (coluna <= x)
	{
		if (coluna == 1)
		{
			ft_putchar('C');
		}
		else if (1 < coluna && coluna < x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
		}
		coluna++;
	}
	ft_putchar('\n');
}

void	empty_line(int x)
{
	int coluna;

	coluna = 1;
	while (coluna <= x)
	{
		if (coluna == 1 || coluna == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		coluna++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int linha;

	linha = 1;
	if (x < 1 || y < 1)
		ft_putchar('!');
	else
	{
		if (linha == 1)
		{
			full_line1(x);
			linha++;
		}
		while (linha < y)
		{
			empty_line(x);
			linha++;
		}
		if (linha == y)
			full_line2(x);
	}
}
