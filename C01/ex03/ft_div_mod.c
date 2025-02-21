/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:47:33 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/16 20:47:36 by edronqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod) 
{ /*a y b son COPIAS de lo que hay en el main, *div y *mod son literal lo que hay en el main*/
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{

	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 100;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %i", div);
	printf("\n");
	printf("mod: %i", mod);
}

/*Esta función divide los dos parámetros a y b y almacena el resultado en el int
apuntado por div.
También almacena el resto de la división de a y b en el int apuntado por mod.*/
