/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:54:47 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/24 17:42:01 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
 void ft_ultimate_div_mod(int *a, int *b)
 {


    if (b)
    {
		int div;
		int mod;

		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
    }
 }
