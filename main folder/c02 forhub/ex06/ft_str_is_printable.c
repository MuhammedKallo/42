/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:48:15 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/26 16:31:40 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] > 32 && str[i] < 127))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main(void)
{
    char a[] = "Muhammed";
    int result = ft_str_is_printable(a);
    printf("%d", result);
}
