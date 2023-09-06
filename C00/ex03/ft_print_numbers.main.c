/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:43:43 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/04 17:12:57 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers (void)
{
    char  n;
    n   = '0';
    while (n<= '9')
    {
        write(1, &n, 1);
            n++;
    }
}
int main()
{
    ft_print_numbers();
}