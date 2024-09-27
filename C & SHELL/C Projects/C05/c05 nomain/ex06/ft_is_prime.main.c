/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:08:35 by mkallo            #+#    #+#             */
/*   Updated: 2024/09/03 19:42:40 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int main (void)
{
	printf("%d", ft_is_prime(11));
	return (0);
}
