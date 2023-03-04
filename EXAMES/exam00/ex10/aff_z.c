/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:52:57 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:52:58 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	found;

	found = 0;
	if (ac == 2)
	{
		while (*av[1] && !found)
		{
			if (*av[1] == 'z')
			{
				write(1, av[1], 1);
				found++;
				break;
			}
			av[1]++;
		}
		if (!found)
			write(1, "z", 1);
					
	}
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
