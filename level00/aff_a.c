/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 17:43:53 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 18:53:06 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : aff_a
**	Expected files   : aff_a.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes a string, and displays the first 'a' character it
**	encounters in it, followed by a newline. If there are no 'a' characters in the
**	string, the program just writes a newline. If the number of parameters is not
**	1, the program displays 'a' followed by a newline.
**	
**	Example:
**	
**	$> ./aff_a "abc" | cat -e
**	a$
**	$> ./aff_a "RaInB0w d4Sh!" | cat -e
**	a$
**	$> ./aff_a "ThE Ck3 Is L|3" | cat -e
**	$
**	$> ./aff_a | cat -e
**	a$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int     i;

        i = 0;
        while (av[1][i])
        {
            if (av[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "a\n", 2);
    return (0);
}
