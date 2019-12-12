/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 10:52:24 by gde-matt          #+#    #+#             */
/*   Updated: 2019/12/12 13:48:32 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_args(int num, char **str)
{
	int i;

	i = 1;
	while (i < num)
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;
	int diff;

	diff = 0;
	i = 0;
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	diff = str1[i] - str2[i];
	return (diff);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				aux = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
	ft_print_args(argc, argv);
	return (0);
}
