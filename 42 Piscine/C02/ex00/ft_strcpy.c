/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:26:09 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/26 16:31:23 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	boyut;

	boyut = 0;
	while(src[boyut] !='\0'){
        boyut++;
	}
	int j;
	j = 0;
	while (j < boyut)
	{
		dest[j]=src[j];
		j++;
	}
	dest[j]='\0';
	return(dest);
}
