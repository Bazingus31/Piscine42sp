/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:20:52 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/03 17:22:29 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int diff;

	diff = 0;
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
	return (diff);
}
