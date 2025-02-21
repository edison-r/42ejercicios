/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 22:04:55 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/16 22:04:57 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	verifyneg(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "Error: Invalid number", 21);
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	verifyneg(x, y);
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && i == x))
				ft_putchar('/');
			else if ((j == 1 && i == x) || (j == y && i == 1))
				ft_putchar('\\');
			else if ((j == 1 || j == y) || (i == 1 || i == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
