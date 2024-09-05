/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:22:25 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/20 14:14:22 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	div;
	int	mod;
	int	n;
	int	n1;

	n = 42;
	n1 = 21;
	ft_div_mod(n, n1, &div, &mod);
	printf("resault = %d and the remainder is :%d", div, mod);
}
