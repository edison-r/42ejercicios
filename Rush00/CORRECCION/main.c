/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edronqui <edronqui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:09:44 by edronqui          #+#    #+#             */
/*   Updated: 2025/02/18 16:38:18 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int x;
	int y;

	if (ac != 3)
		return (1);
	x = atoi(argv[1]); //ascii to int
	y = atoi(argv[2]); //ascii to int
	rush(x, y);
	return (0);
}

/* 
 
	./a.out 123 456
		012
	0	 1   2
		
	argv (char **)
	argv[2] = (char *)"456"
	argv[2][1] = (char) '5'
	argc = 3
  
 
 */
