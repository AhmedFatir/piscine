/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:55:21 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:55:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int	main(void)
{
	unsigned char	c;

	c = 20;
	c = swap_bits(c);
	printf("%c\n", c);
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char result;

	result = ((octet << 4) & 0b11110000) | ((octet >> 4 ) & 0b00001111);
	return (result);
}
