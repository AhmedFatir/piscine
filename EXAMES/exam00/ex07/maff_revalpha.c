/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:52:46 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:52:47 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	l;

	l = 122;
	while (l >= 97)
	{
		if (l % 2 == 0)
			ft_putchar(l);
		else
			ft_putchar(l - 32);
		l--;
	}
	write(1, "\n", 1);
	return (0);
}
