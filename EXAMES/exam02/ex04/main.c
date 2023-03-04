/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:55:06 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:55:07 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.c"
#include "reverse_bits.c"

int	main(void)
{
	unsigned char c;

	c = '&';
	printf("ASCII: '%c', Dec Value: '%d'\n", c, c);
	print_bits(c);
	c = reverse_bits(c);
	printf("Reversed: \n");
	printf("ASCII: '%c', Dec Value: '%d'\n", c, c);
	print_bits(c);
	return (0);
}
