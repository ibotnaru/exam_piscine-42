/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 17:23:55 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 17:41:52 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : print_bits
**	Expected files   : print_bits.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
**	AT THE END.
**
**	Your function must be declared as follows:
**
**	void	print_bits(unsigned char octet);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char    mask;

	mask = 128;
	while(mask > 0)
	{
		if ((octet & mask) != 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask = mask >> 1;
	}
}
