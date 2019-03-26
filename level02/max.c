/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:17:53 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/25 18:19:21 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : max
**	Expected files   : max.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Write the following function:
**	
**	int		max(int* tab, unsigned int len);
**	
**	The first parameter is an array of int, the second is the number of elements in
**	the array.
**	
**	The function returns the largest number found in the array.
**	
**	If the array is empty, the function returns 0.
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

int		max(int* tab, unsigned int len)
{
    unsigned int    i;
    int             max_num;

    i = 0;
    max_num = 0;
    while (i < len)
    {
        if (i == 0)
            max_num = tab[i];
        if (tab[i] > max_num)
        {
            max_num = tab[i];
        }
        i++;
    }
    return (max_num);
}
