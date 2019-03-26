/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 22:53:16 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/25 22:54:14 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : only_z
**	Expected files   : only_z.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that displays a 'z' character on the standard output.
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main(void)
{
    write(1, "z", 1);
    return (0);
}
