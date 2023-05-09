/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhess <fhess@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:07:57 by fhess             #+#    #+#             */
/*   Updated: 2023/04/27 17:21:35 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char *ft_strrev(char *str);

int main(void)
{
    char str[] = "hello world";
    write(1, "Vorher: ", sizeof("Vorher: ") - 1);
    write(1, str, strlen(str));
    write(1, "\n", 1);
    ft_strrev(str);
    write(1, "Nachher: ", sizeof("Nachher: ") - 1);
    write(1, str, strlen(str));
    write(1, "\n", 1);
    return (0);
}

char *ft_strrev(char *str)
{
    size_t len = strlen(str);
    char temp;
    size_t i = 0;
    size_t j = len - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return (str);
}
