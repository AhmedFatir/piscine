/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:52:35 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:52:36 by afatir           ###   ########.fr       */
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

	l = 97;
	while (l <= 122)
	{
		if (l % 2 == 0)
			ft_putchar(l - 32);
		else
			ft_putchar(l);
		l++;
	}
	ft_putchar('\n');
	return (0);
}
