/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:14:35 by afatir            #+#    #+#             */
/*   Updated: 2022/08/25 22:22:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = -1;
	while (i < 98)
	{
		i++;
		j = i;
		while (j < 99)
		{
			j++;
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			write(1, " ", 1);
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}
