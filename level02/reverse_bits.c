/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 14:56:40 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 14:59:19 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : reverse_bits
**	Expected files   : reverse_bits.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Write a function that takes a byte, reverses it, bit by bit (like the
**	example) and returns the result.
**	
**	Your function must be declared as follows:
**	
**	unsigned char	reverse_bits(unsigned char octet);
**	
**	Example:
**	
**	  1 byte
**	_____________
**	 0100  0001
**	     ||
**	     \/
**	 1000  0010
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char    result;
    int              i;

    i = 0;
    while (i < 8)
    {
        result <<= 1;
        result = (octet & 1) | result;
        octet >>= 1;
        i++;
    }
    return (result);
}
