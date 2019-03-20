/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 20:38:03 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 20:42:49 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : only_a
**	Expected files   : only_a.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that displays an 'a' character on the standard output.
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (void)
{
	write(1, "a", 1);
	return (0);
}
