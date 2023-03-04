/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:54:12 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:54:13 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i)
		write(1, &str[--i], 1);
}
