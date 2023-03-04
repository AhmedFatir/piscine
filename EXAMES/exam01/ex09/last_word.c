/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:54:08 by afatir            #+#    #+#             */
/*   Updated: 2023/03/04 18:54:09 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	last_word(char *str);
int	last_word_index(char *str);
int	is_space(char c);
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return (0);
}

void	last_word(char *str)
{
	int	i;

	i = last_word_index(str);
	while (!is_space(str[i]))
		ft_putchar(str[i++]);
}

int	last_word_index(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1])
		i++;
	while (str[i])
	{
		if (!is_space(str[i]) && !is_space(str[i - 1]))
			break;
		i--;
	}
	while (!is_space(str[i]))
		i--;
	return (i + 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
