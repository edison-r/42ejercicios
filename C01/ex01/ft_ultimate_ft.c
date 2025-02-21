/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:31:30 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/17 14:31:33 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft( int *********nbr )
{
	*********nbr = 42;
}

int	main(void)
{
	int	num;
	int	*ptr1 = &num;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;
	
	num = 0;
	printf("%i", num);
	printf("\n");
	ft_ultimate_ft(ptr9);
	printf("%i", num);

	return (0);
}
