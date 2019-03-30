/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:17:52 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/29 17:19:28 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_itoa
**	Expected files   : ft_itoa.c
**	Allowed functions: malloc
**	--------------------------------------------------------------------------------
**	
**	Write a function that takes an int and converts it to a null-terminated string.
**	The function returns the result in a char array that you must allocate.
**	
**	Your function must be declared as follows:
**	
**	char	*ft_itoa(int nbr);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <stdlib.h>

static int	ft_len(int n)
{
	int		nbrc;
	int		len;

	len = 0;
	nbrc = n;
	while (nbrc != 0)
	{
		nbrc = nbrc / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	int		sign;
	int		len;
	char	*str;

	len = (nbr < 0 ? 1 : 0) + ft_len(nbr);
	sign = nbr < 0 ? -1 : 1;
	if (!(str = malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (nbr == -2147483648)
	{
		nbr = -214748364;
		str[--len] = '8';
	}
	nbr = (nbr < 0) ? -nbr : nbr;
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		str[len-- - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (sign < 0)
		str[len - 1] = '-';
	return (str);
}