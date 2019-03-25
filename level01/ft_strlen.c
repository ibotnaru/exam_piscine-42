/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 18:57:22 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 19:11:09 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_strlen
**	Expected files   : ft_strlen.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Write a function that returns the length of a string.
**	
**	Your function must be declared as follows:
**	
**	int	ft_strlen(char *str);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

int	ft_strlen(char *str)
{
    int    i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
