/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:34:23 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/16 20:34:26 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap( int *a, int *b )
{
	int i;
	
	i = *a;
	*a = *b;
	*b = i;
}

int	main(void)
{
	int	a;
	int	b;

	
	a = 3;
	b = 5;
	
	printf("a: %i", a); // 1
	printf("\n");
	printf("b: %i", b); // 2
	printf("\n \n");
	ft_swap(&a, &b); 
	printf("a: %i", a); // 2
	printf("\n");
	printf("b: %i", b); // 1
	
}
