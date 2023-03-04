/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:55:33 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:55:34 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int 	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				putchar('A' - av[1][i] + 'Z');
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				putchar('a' - av[1][i] + 'z');
			else
				putchar(av[1][i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
