/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:41:18 by mkallo            #+#    #+#             */
/*   Updated: 2024/09/02 21:26:16 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (result);
}

int	main(void)
{
	printf("%i", ft_recursive_power(5, 4));
}
