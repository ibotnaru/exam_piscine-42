/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:44:03 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/28 11:45:12 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : aff_first_param
**	Expected files   : aff_first_param.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes strings as arguments, and displays its first
**	argument followed by a \n.
**	
**	If the number of arguments is less than 1, the program displays \n.
**	
**	Example:
**	
**	$> ./aff_first_param it is at this moment jackson knew | cat -e
**	it$
**	$> ./aff_first_param "I bet you can't print me" | cat -e
**	I bet you can't print me$
**	$> ./aff_first_param | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int     main(int ac, char **av)
{
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        int     i;

        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
