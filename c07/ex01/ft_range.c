/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:47:32 by afatir            #+#    #+#             */
/*   Updated: 2022/09/14 17:22:49 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*t;

	i = 0;
	t = malloc((max - min) * sizeof(int));
	if (min >= max || !(t))
		return (0);
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	t[i] = '\0';
	return (t);
}
