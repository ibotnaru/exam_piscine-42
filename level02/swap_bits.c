/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 15:54:20 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/28 20:35:50 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Write a function that takes a byte, swaps its halves (like the example) and
**	returns the result.
**	
**	Your function must be declared as follows:
**	
**	unsigned char	swap_bits(unsigned char octet);
**	
**	Example:
**	
**	  1 byte
**	_____________
**	 0100 | 0001
**	     \ /
**	     / \
**	 0001 | 0100
**	
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char num;

	num = 0;
	num |= ((octet & 0xF0) >> 4);
	num |= ((octet & 0x0F) << 4);
	return (num);
}
