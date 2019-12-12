/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:37:35 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/09 10:19:27 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
			|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int signal;

	i = 0;
	signal = 1;
	result = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] % '0');
		i++;
	}
	return (result * signal);
}
