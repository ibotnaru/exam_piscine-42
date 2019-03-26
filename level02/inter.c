/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 22:19:40 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/25 22:21:17 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : inter
**	Expected files   : inter.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes two strings and displays, without doubles, the
**	characters that appear in both strings, in the order they appear in the first
**	one.
**	
**	The display will be followed by a \n.
**	
**	If the number of arguments is not 2, the program displays \n.
**	
**	Examples:
**	
**	$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
**	padinto$
**	$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
**	df6ewg4$
**	$>./inter "nothing" "This sentence hides nothing" | cat -e
**	nothig$
**	$>./inter | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int    i;
        int    j;
        int    temp[127] = {0};

        j = 0;
        while (av[2][j])
        {
            if (temp[(int)av[2][j]] == 0)
                temp[(int)av[2][j]] = 1;
            j++;
        }
        i = 0;
        while (av[1][i])
        {
            if (temp[(int)av[1][i]] == 1)
            {
                temp[(int)av[1][i]] = 2;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
