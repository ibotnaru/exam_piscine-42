/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:12:36 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/09/02 21:13:52 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Assignment name  : fprime
**  Expected files   : fprime.c
**  Allowed functions: printf, atoi
**  --------------------------------------------------------------------------------
**  
**  Write a program that takes a positive int and displays its prime factors on the
**  standard output, followed by a newline.
**  
**  Factors must be displayed in ascending order and separated by '*', so that
**  the expression in the output gives the right result.
**  
**  If the number of parameters is not 1, simply display a newline.
**  
**  The input, when there is one, will be valid.
**  
**  Examples:
**  
**  $> ./fprime 225225 | cat -e
**  3*3*5*5*7*11*13$
**  $> ./fprime 8333325 | cat -e
**  3*3*5*5*7*11*13*37$
**  $> ./fprime 9539 | cat -e
**  9539$
**  $> ./fprime 804577 | cat -e
**  804577$
**  $> ./fprime 42 | cat -e
**  2*3*7$
**  $> ./fprime 1 | cat -e
**  1$
**  $> ./fprime | cat -e
**  $
**  $> ./fprime 42 21 | cat -e
**  $
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int     num = atoi(av[1]);
        if (num == 1)
            printf("1");
        int     n  = 2;
        int     tmp = 0;
        while(n <= num)
        {
 			tmp = n;
            if (n != 0)
            {
                if (num % n == 0)
                {    
                    printf("%d", n);
                    if (n != num)
                        printf("*");
                    num = num / n;
                }
                else
                    n++;
            }
            else
                n = tmp + 1;
        }
    }
    printf("\n");
    return (0);
}