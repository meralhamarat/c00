/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhamarat <mhamarat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:16:25 by mhamarat          #+#    #+#             */
/*   Updated: 2023/09/03 20:42:43 by mhamarat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
    char c;
    c ='a';

    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}
int main()
{
    ft_print_alphabet();
    return(0);
}
