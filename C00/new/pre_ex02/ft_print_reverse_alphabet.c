/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:36:52 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/14 17:33:21 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alplhabet(char c)
{
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alplhabet('z');
}
