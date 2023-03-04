/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:20:43 by afatir            #+#    #+#             */
/*   Updated: 2022/09/15 15:57:54 by afatir           ###   ########.fr       */
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
/*
int main(void)
{
	//char	strings[][] = {{"hello"}, {"world"},{"cat"}};
	char	sep[] = "|";
	char	**strings = malloc(3 * sizeof(char*));
	
	strings[0] = malloc(3 * sizeof(char*));
	strcpy(strings[0], "hello");
	
	strings[1] = malloc(6 * sizeof(char*));
	strcpy(strings[1], "world");

	strings[2] = malloc(4 * sizeof(char*));
	strcpy(strings[2], "cat");

	char	*ns = ft_strjoin(3, strings, sep);
	printf("%s\n", ns);
	return (0);
}*/
