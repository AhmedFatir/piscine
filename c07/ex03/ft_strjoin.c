/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:20:43 by afatir            #+#    #+#             */
/*   Updated: 2023/09/14 08:06:21 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*p;

	k = 0;
	p = malloc(sizeof(strs));
	i = 0;
	while (k < size)
	{
		j = 0;
		while (strs[k][j])
		{
			p[i++] = strs[k][j];
			j++;
		}
		j = 0;
		while (sep[j] != 0 && k != size - 1)
		{
			p[i++] = sep[j++];
		}
		k++;
	}
	p[i] = 0;
	return (p);
}
