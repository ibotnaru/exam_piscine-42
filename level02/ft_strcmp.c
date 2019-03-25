/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 16:53:42 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/24 17:02:55 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_strcmp
**	Expected files   : ft_strcmp.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Reproduce the behavior of the function strcmp (man strcmp).
**	
**	Your function must be declared as follows:
**	
**	int    ft_strcmp(char *s1, char *s2);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
