/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:35:08 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/09 09:27:38 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_double(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < ft_strlen(str))
	{
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int		ft_plus_minus(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		else
			i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	nb;

	nb = nbr;
	i = ft_strlen(base);
	if ((i >= 1 && ft_check_double(base) == 1) && ft_plus_minus(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = nbr * -1;
		}
		if (nb / i > 0)
		{
			ft_putnbr_base(nb / i, base);
		}
		ft_putchar(base[nb % i]);
	}
}
