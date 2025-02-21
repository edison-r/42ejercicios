/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:23:01 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/16 19:23:58 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft( int *nbr ) /*4. recibe la direccion de memoria y mira que hay dentro (*)*/
{
	*nbr = 42; /*5. le asigna a la variable *nbr el num. 42*/
}

int	main(void)
{
	int	num; /*1. creo una variable llamada num*/
	
	num = 0; /*2. asigno "0" a la variable num*/
	printf("%i", num);
	printf("\n");
	ft_ft(&num); /*3. llamo a la funcion y le paso la direccion de memoria de num (&num)*/
	printf("%i", num); /*6. imprime num, previamente cambiado*/

	return (0);
}
