/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:36:52 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/14 17:40:17 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char n)
{
	while (n <= '9')
	{
		write(1, &n, 1);
		write(1, "\n", 2);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers('0');
}
