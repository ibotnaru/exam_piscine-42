/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:42:50 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/09/02 14:46:23 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Assignment name  : fizzbuzz
**  Expected files   : fizzbuzz.c
**  Allowed functions: write
**  --------------------------------------------------------------------------------
**  
**  Write a program that prints the numbers from 1 to 100, each separated by a
**  newline.
**  
**  If the number is a multiple of 3, it prints 'fizz' instead.
**  
**  If the number is a multiple of 5, it prints 'buzz' instead.
**  
**  If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.
**  
**  Example:
**  
**  $>./fizzbuzz
**  1
**  2
**  fizz
**  4
**  buzz
**  fizz
**  7
**  8
**  fizz
**  buzz
**  11
**  fizz
**  13
**  14
**  fizzbuzz
**  [...]
**  97
**  98
**  fizz
**  buzz
**  $>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

void putnumber(int i)
{
    char    c = '0';
    if (i > 9)
    {
        putnumber(i / 10);
        putnumber(i % 10);
    }
    else
    {
        c = c + i;
        write(1, &c, 1);   
    }
}

int main(void)
{
    int     i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
             write(1, "fizz", 4);
        else if (i % 5 == 0)
             write(1, "buzz", 4);
        else
            putnumber(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}