/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 16:49:22 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/23 17:22:03 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : rev_print
**	Expected files   : rev_print.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes a string, and displays the string in reverse
**	followed by a newline.
**	
**	If the number of parameters is not 1, the program displays a newline.
**	
**	Examples:
**	
**	$> ./rev_print "rainbow dash" | cat -e
**	hsad wobniar$
**	$> ./rev_print "Ponies are awesome" | cat -e
**	emosewa era seinoP$
**	$> ./rev_print | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int    i;

        i = 0;
        while (av[1][i])
        {
            i++;
        }
        i = i - 1;
        while (i >= 0)
        {
            write (1, &av[1][i], 1);
            i--;
        }
    }
    write (1, "\n", 1);
    return (0);
}
