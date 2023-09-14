/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:53:57 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:53:58 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_space(char c);
void	ft_putchar(char c);
void	first_word(char *str);
int	first_word_index(char *str);

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return (0);
}

void	first_word(char *str)
{
	int	i;

	i = first_word_index(str);
	while (!is_space(str[i]))
		ft_putchar(str[i++]);
}

int	first_word_index(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_space(str[i]) && !is_space(str[i + 1]))
			break;
		i++;
	}
	return (i);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
