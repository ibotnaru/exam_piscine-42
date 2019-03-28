/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 23:22:39 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/27 23:56:50 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : expand_str
**	Expected files   : expand_str.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes a string and displays it with exactly three spaces
**	between each word, with no spaces or tabs either at the beginning or the end,
**	followed by a newline.
**	
**	A word is a section of string delimited either by spaces/tabs, or by the
**	start/end of the string.
**	
**	If the number of parameters is not 1, or if there are no words, simply display
**	a newline.
**	
**	Examples:
**	
**	$> ./epur_str "See? It's easy to print the same thing" | cat -e
**	See?   It's   easy   to   print   the   same   thing$
**	$> ./epur_str " this        time it      will     be    more complex  " | cat -e
**	this   time   it   will   be   more   complex$
**	$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
**	$
**	$> ./epur_str "" | cat -e
**	$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        int     i;
        int     len;

        len = 0;
        while (av[1][len])                                                              //in this loop we are going to the '\0' of the string
        {
            len++;
        }
        len = len - 1;                                                                  
        while (len >= 0 && (av[1][len] == ' ' || av[1][len] == '\t'))                   //skipping all the tabs and spaces starting from the '\0'
        {
            len--;
        }
        i = 0;
        while (i < len)
        {
            while (av[1][i] != '\0' && (av[1][i] == ' ' || av[1][i] == '\t'))           //skipping ALL the tabs and spaces 
            {
                i++;
            }
            while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
                i++;
            }
            if (i < len)                                                                //replace all the ' ' and '\t' to "   "
                write(1, "   ", 3);
        }
    }
    write(1, "\n", 1);
    return (0);
}