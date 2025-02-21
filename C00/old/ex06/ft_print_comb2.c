/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 23:10:08 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/15 23:12:55 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	
	num1 = '0';
	while (num3 <= '98')
	{
		num2 = num1 + 1;
		while (num4 <= '99')
		{
			write(1, &num1, 2);
			write(1, &num1, 2);
			write(1, &num2, 2);
			write(1, &num2, 2);
			if (num3 != '9')
				write(1, ", ", 2);
			num1++;
		}
		num2++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
/*00 00, 00 01, 00 02 ...*/
