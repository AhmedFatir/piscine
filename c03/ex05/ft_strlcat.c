/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:24:16 by afatir            #+#    #+#             */
/*   Updated: 2022/09/07 18:18:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	l = ft_strlen(dest) + ft_strlen(src);
	if (size == 0 || size < j)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
	i++;
	j++;
	}
	dest[j] = '\0';
	return (l);
}
