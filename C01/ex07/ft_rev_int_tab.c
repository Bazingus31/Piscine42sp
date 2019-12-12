/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:34:09 by gde-matt          #+#    #+#             */
/*   Updated: 2019/11/26 15:33:34 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *num1, int *num2)
{
	int aux;

	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int f;

	i = 0;
	f = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[f]);
		i++;
		f--;
	}
}
