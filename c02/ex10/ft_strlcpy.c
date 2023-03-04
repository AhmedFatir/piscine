/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:21:02 by afatir            #+#    #+#             */
/*   Updated: 2022/09/01 12:02:38 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
	j++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (j);
}	
