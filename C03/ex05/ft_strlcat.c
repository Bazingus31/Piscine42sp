/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:51:53 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/04 21:40:27 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int isrc;
	unsigned int countsize;
	unsigned int sum;

	isrc = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		countsize = ft_strlen(dest);
		if (countsize > size - 1)
			return (ft_strlen(src) + size);
		else
		{
			sum = ft_strlen(dest) + ft_strlen(src);
			while (countsize < size - 1 && src[isrc] != '\0')
			{
				dest[countsize] = src[isrc];
				countsize++;
				isrc++;
			}
			dest[countsize] = '\0';
			return (sum);
		}
	}
}
