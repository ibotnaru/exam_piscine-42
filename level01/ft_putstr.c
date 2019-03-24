/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 11:21:00 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 11:23:33 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_putstr
**	Expected files   : ft_putstr.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a function that displays a string on the standard output.
**
**	The pointer passed to the function contains the address of the string's first
**	character.
**
**	Your function must be declared as follows:
**
**	void	ft_putstr(char *str);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>
void	ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
