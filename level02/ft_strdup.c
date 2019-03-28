/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 22:21:48 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/27 22:23:14 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_strdup
**	Expected files   : ft_strdup.c
**	Allowed functions: malloc
**	--------------------------------------------------------------------------------
**	
**	Reproduce the behavior of the function strdup (man strdup).
**	
**	Your function must be declared as follows:
**	
**	char    *ft_strdup(char *src);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
