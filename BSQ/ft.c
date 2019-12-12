/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:05:01 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/11 21:55:05 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_min(int a, int b, int c)
{
	int menor;

	menor = a;
	if (b < menor)
		menor = b;
	if (c < menor)
		menor = c;
	return (menor);
}

int		ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_string(char *str, int length)
{
	int		i;
	int		s;
	char	aux;

	i = 0;
	s = length - 1;
	while (i < (length / 2))
	{
		aux = str[i];
		str[i] = str[s];
		str[s] = aux;
		i++;
		s--;
	}
	return (str);
}
