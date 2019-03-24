/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 11:36:52 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 11:42:50 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_countdown
**	Expected files   : ft_countdown.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that displays all digits in descending order, followed by a
**	newline.
**	
**	Example:
**	$> ./ft_countdown | cat -e
**	9876543210$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/
#include <unistd.h>

int main(void)
{
    write(1, "9876543210\n", 11);
    return (0);
}
