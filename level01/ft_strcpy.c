/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 12:40:29 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/25 17:11:59 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_strcpy
**	Expected files   : ft_strcpy.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Reproduce the behavior of the function strcpy (man strcpy).
**	
**	Your function must be declared as follows:
**	
**	char    *ft_strcpy(char *s1, char *s2);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

char    *ft_strcpy(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
