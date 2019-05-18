/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:22:17 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/17 20:23:53 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : is_power_of_2
**	Expected files   : is_power_of_2.c
**	Allowed functions: None
**	--------------------------------------------------------------------------------
**	
**	Write a function that determines if a given number is a power of 2.
**	
**	This function returns 1 if the given number is a power of 2, otherwise it returns 0.
**	
**	Your function must be declared as follows:
**	
**	int	    is_power_of_2(unsigned int n);
**
**  >>>>>>>>>> FAILURE <<<<<<<<<<
*/

int     is_power_of_2(unsigned int n)
{
        return ((n & (-n)) == n ? 1 : 0);
}