/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:34:41 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/29 20:36:01 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : hidenp
**	Expected files   : hidenp.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program named hidenp that takes two strings and displays 1
**	followed by a newline if the first string is hidden in the second one,
**	otherwise displays 0 followed by a newline.
**	
**	Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
**	find each character from s1 in s2, in the same order as they appear in s1.
**	Also, the empty string is hidden in any string.
**	
**	If the number of parameters is not 2, the program displays a newline.
**	
**	Examples :
**	
**	$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
**	1$
**	$>./hidenp "abc" "2altrb53c.sse" | cat -e
**	1$
**	$>./hidenp "abc" "btarc" | cat -e
**	0$
**	$>./hidenp | cat -e
**	$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (int ac, char **av)
{
    int     i;
    int     j;
    int     flag;
    int     len;

    i = 0;
    j = 0;
    flag = 0;
    len = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    flag++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (flag == i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}