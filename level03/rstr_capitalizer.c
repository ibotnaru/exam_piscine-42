/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 19:55:15 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/27 20:04:01 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : rstr_capitalizer
**	Expected files   : rstr_capitalizer.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes one or more strings and, for each argument, puts
**	the last character that is a letter of each word in uppercase and the rest
**	in lowercase, then displays the result followed by a \n.
**	
**	A word is a section of string delimited by spaces/tabs or the start/end of the
**	string. If a word has a single letter, it must be capitalized.
**	
**	A letter is a character in the set [a-zA-Z]
**	
**	If there are no parameters, display \n.
**	
**	Examples:
**	
**	$> ./rstr_capitalizer | cat -e
**	$
**	$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
**	A firsT littlE tesT$
**	$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
**	seconD tesT A littlE biT   moaR compleX$
**	   but... thiS iS noT thaT compleX$
**	     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int     main(int ac, char **av)
{
    if (ac == 1)
        write(1, "\n", 1);
    
    int     i;

    i = 1;
    while (i < ac)
    {
        int     j;

        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'A' && av[i][j] <= 'Z')                             
            {
                av[i][j] = av[i][j] + 32;                                   //changing all the letters to lowercase
            }
            j++;                                                            //going to the end of the string
        }
        j = j - 1;                                                          //starting from the end
        while (j >= 0)
        {
            while (j >= 0 && (av[i][j] == ' ' || av[i][j] == '\t'))
            {
                j--;
            }
            if (j != -1 && av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] = av[i][j] - 32;
            while (j >= 0 && av[i][j] != ' ' && av[i][j] != '\t')
            {
                j--;
            }
        }
        j = 0;
        while (av[i][j])
        {
            write(1, &av[i][j], 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
    return (0);
}
