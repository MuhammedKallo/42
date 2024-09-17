/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkallo <mkallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:21:47 by mkallo            #+#    #+#             */
/*   Updated: 2024/08/26 16:31:44 by mkallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        while (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}

int main(int argc, char const *argv[])
{
    char str[] = "teST";
    printf("%s", ft_strlowcase(str));
    return 0;
}
