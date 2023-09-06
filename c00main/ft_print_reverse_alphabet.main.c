/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:17:13 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/03 21:04:41 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while ( c >= 'a')
    {
        write (1 ,&c, 1);
        c--;
    }
}
int main ()
{
    ft_print_reverse_alphabet();
    return(0);
}
