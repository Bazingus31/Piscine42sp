/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:44:27 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/06 16:53:12 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int istr;
	int ifind;

	istr = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (istr < (ft_strlen(str)))
	{
		ifind = 0;
		if (str[istr] == to_find[ifind])
		{
			while ((str[istr] == to_find[ifind]) && (to_find[ifind] != '\0'))
			{
				istr++;
				ifind++;
			}
			if (to_find[ifind] == '\0')
				return (&str[istr - ifind]);
		}
		else
			istr++;
	}
	return (0);
}
