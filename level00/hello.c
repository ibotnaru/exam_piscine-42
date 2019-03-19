/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 18:03:24 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 00:10:42 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : hello
**	Expected files   : hello.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that displays "Hello World!" followed by a \n.
**
**	Example:
**
**	$>./hello
**	Hello World!
**	$>./hello | cat -e
**	Hello World!$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
