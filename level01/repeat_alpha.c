/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 21:56:06 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/27 21:57:26 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : repeat_alpha
**	Expected files   : repeat_alpha.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program called repeat_alpha that takes a string and display it
**	repeating each alphabetical character as many times as its alphabetical index,
**	followed by a newline.
**	
**	'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
**	
**	Case remains unchanged.
**	
**	If the number of arguments is not 1, just display a newline.
**	
**	Examples:
**	
**	$>./repeat_alpha "abc"
**	abbccc
**	$>./repeat_alpha "Alex." | cat -e
**	Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
**	$>./repeat_alpha 'abacadaba 42!' | cat -e
**	abbacccaddddabba 42!$
**	$>./repeat_alpha | cat -e
**	$
**	$>
**	$>./repeat_alpha "" | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        int     i;
        int     counter;

        i = 0;
        counter = 0;
        while(av[1][i])
        {
            if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                if (av[1][i] >= 'a' && av[1][i] <= 'z')
                {
                    counter = av[1][i] - 'a' + 1;
                }
                else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                {
                    counter = av[1][i] - 'A' + 1;
                }
                int     k;

                k = 0;
                while (counter > k)
                {
                    write(1, &av[1][i], 1);
                    k++;
                }
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
