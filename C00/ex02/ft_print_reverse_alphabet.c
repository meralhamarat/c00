/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:17:13 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/04 16:38:22 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'a';
    while ('a' <= 'z');
    {
        write (1 ,&c, 1);
        c--;
    }       
}

