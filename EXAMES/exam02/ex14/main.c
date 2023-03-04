/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:56:27 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:56:28 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_power_of_2.c"
#include <stdio.h>

int	main(void)
{
	unsigned int	nb;

	nb = 0;
	while (nb++ < 100)
		if (is_power_of_2(nb))
			printf("nb %d is power of 2\n", nb);
	return (0);
}
