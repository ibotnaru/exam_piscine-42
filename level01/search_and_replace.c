/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 23:21:27 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/25 23:22:34 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : search_and_replace
**	Expected files   : search_and_replace.c
**	Allowed functions: write, exit
**	--------------------------------------------------------------------------------
**	
**	Write a program called search_and_replace that takes 3 arguments, the first
**	arguments is a string in which to replace a letter (2nd argument) by
**	another one (3rd argument).
**	
**	If the number of arguments is not 3, just display a newline.
**	
**	If the second argument is not contained in the first one (the string)
**	then the program simply rewrites the string followed by a newline.
**	
**	Examples:
**	$>./search_and_replace "My life for Aizr" "z" "u"
**	My life for Aiur
**	$>./search_and_replace "gaetan" "art" "zul" | cat -e
**	$
**	$>./search_and_replace "zaz" "r" "u" | cat -e
**	zaz$
**	$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
**	$
**	$>./search_and_replace "In foct, stoff crew ore very nice. They like metol." "o" "a" | cat -e
**	In fact, staff crew are very nice. They like metal.$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][1] == '\0' && av[3][1] == '\0')
        {
            int     i;
            
            i = 0;
            while (av[1][i])
            {
                if (av[1][i] == av[2][0])
                {
                    av[1][i] = av[3][0];
                    write(1, &av[1][i], 1);
                }
                else
                    write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
