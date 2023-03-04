/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:56:20 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:56:21 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strrev.c"

int	main(void)
{
	char	str[] = "erutuF";

	printf("str = %s\n", str);
	ft_strrev(str);
	printf("rev = %s\n", str);
	return (0);
}
