/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:57:02 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/02 21:28:32 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	char	*hex_alphabet;
	int		a;
	int		b;

	if (c <= 0)
	{
		c = c * -1;
	}
	hex_alphabet = "0123456789abcdef";
	ft_putchar('\\');
	a = c / 16;
	b = c % 16;
	ft_putchar(hex_alphabet[a]);
	ft_putchar(hex_alphabet[b]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_hex(str[i]);
		}
		i++;
	}
}
