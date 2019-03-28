/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 17:26:56 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/27 17:41:57 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : alpha_mirror
**	Expected files   : alpha_mirror.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program called alpha_mirror that takes a string and displays this string
**	after replacing each alphabetical character by the opposite alphabetical
**	character, followed by a newline.
**	
**	'a' becomes 'z', 'Z' becomes 'A'
**	'd' becomes 'w', 'M' becomes 'N'
**	
**	and so on.
**	
**	Case is not changed.
**	
**	If the number of arguments is not 1, display only a newline.
**	
**	Examples:
**	
**	$>./alpha_mirror "abc"
**	zyx
**	$>./alpha_mirror "My horse is Amazing." | cat -e
**	Nb slihv rh Znzarmt.$
**	$>./alpha_mirror | cat -e
**	$
**	$>
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
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = 'z' - av[1][i] + 'a';
                write(1, &av[1][i], 1);
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = 'Z' - av[1][i] + 'A';
                write(1, &av[1][i], 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
