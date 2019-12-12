/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:29:22 by gde-matt          #+#    #+#             */
/*   Updated: 2019/11/29 19:33:49 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_nbr(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int		is_lowchar(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int		is_upchar(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (is_lowchar(str[i]) == 1)
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (is_nbr(str[i - 1]) != 1 && is_lowchar(str[i - 1]) != 1
				&& is_upchar(str[i - 1]) != 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			i++;
		}
		else
		{
			if (is_upchar(str[i]) == 1)
				str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
