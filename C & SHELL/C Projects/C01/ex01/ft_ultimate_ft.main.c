/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:12:03 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/19 14:44:57 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********ptr)
{
	*********ptr = 42;
}

int main()
{
	int n;
	int *ptr1, **ptr2, ***ptr3, ****ptr4, *****ptr5, ******ptr6, *******ptr7, ********ptr8, *********ptr9;

	ptr9 = &ptr8;
	ptr8 = &ptr7;
	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr1;
	ptr1 = &n;
	
	
	ft_ultimate_ft(ptr9);
	printf("%d",n);
}
