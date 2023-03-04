/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:55:12 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:55:13 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   reverse_bits(unsigned char octet)
{
	unsigned char rev;
	int	bits;

	bits = 0;
	rev = 0;
	while (bits < 8)
	{
		rev = (rev << 1) | (octet & 1);
		octet >>= 1;
		bits++;
	}
	return (rev);
}
