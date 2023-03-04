/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:56:14 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:56:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hollow";
	s2 = "World";
	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("result = %d\n", ft_strcmp(s1, s2));
	return (0);
}
