/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 23:51:53 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/18 23:54:04 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : maff_revalpha
**	Expected files   : maff_revalpha.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that displays the alphabet in reverse, with even letters in
**	uppercase, and odd letters in lowercase, followed by a newline.
**
**	Example:
**
**	$> ./maff_revalpha | cat -e
**	zYxWvUtSrQpOnMlKjIhGfEdCbA$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
**
*/

#include <unistd.h>

int main (void)
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}
