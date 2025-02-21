/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:10:22 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/18 17:11:46 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	verifyneg(int x, int y)
{
	if (x < 0 || y < 0)
		write(2, "Error: Invalid number!\n",23);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	verifyneg(x, y);
	j = -1;
	while (++j < y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && (i == 1 || i == x))
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j++;
	}
}
