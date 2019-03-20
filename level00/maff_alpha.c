/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:16:21 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 18:23:20 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : maff_alpha
**	Expected files   : maff_alpha.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that displays the alphabet, with even letters in uppercase, and
**	odd letters in lowercase, followed by a newline.
**
**	Example:
**
**	$> ./maff_alpha | cat -e
**	aBcDeFgHiJkLmNoPqRsTuVwXyZ$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
