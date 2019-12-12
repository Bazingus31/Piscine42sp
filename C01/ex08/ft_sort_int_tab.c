/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 08:54:14 by gde-matt          #+#    #+#             */
/*   Updated: 2019/11/26 11:33:57 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *num1, int *num2)
{
	int aux;

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i++;
			}
			else
			{
				i++;
			}
		}
		size--;
	}
}
