/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:34:52 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/29 18:43:52 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
	write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	ft_putstr("test");
	return 0;
}
