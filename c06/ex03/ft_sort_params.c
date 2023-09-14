/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:59:38 by afatir            #+#    #+#             */
/*   Updated: 2022/09/13 19:12:28 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
	i++;
	}
}

int	ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] == b[i])
			i++;
		else if (a[i] < b[i] || a[i] > b[i])
			return (a[i] - b[i]);
	i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char		*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
		j++;
		}
	i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	i++;
	}
	return (0);
}
