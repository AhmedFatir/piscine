/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:55:29 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:55:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 255

void	put_uniq(char *s, int *exist)
{
	while (*s)
	{
		if (!exist[(int)*s])
		{
			write(1, s, 1);
			exist[(int)*s] = 1;
		}
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int exist[SIZE] = {0};
		char *s1 = av[1];
		char *s2 = av[2];
		put_uniq(s1, exist);
		put_uniq(s2, exist);
	}
	write(1, "\n", 1);
	return (0);
}
