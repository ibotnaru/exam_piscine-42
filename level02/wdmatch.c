/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 19:21:48 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/23 19:24:00 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : wdmatch
**	Expected files   : wdmatch.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes two strings and checks whether it's possible to
**	write the first string with characters from the second string, while respecting
**	the order in which these characters appear in the second string.
**	
**	If it's possible, the program displays the string, followed by a \n, otherwise
**	it simply displays a \n.
**	
**	If the number of arguments is not 2, the program displays a \n.
**	
**	Examples:
**	
**	$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
**	faya$
**	$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
**	$
**	$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
**	forty two$
**	$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
**	$
**	$>./wdmatch | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int    i;
		int    j;
		int    len;

		i = 0;
		j = 0;
		len = 0;
		while(av[1][i] && av[2][j])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					len++;
					j++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (len == ft_strlen(av[1]))
		   write(1, av[1], len);
	}
	write (1, "\n", 1);
	return (0);
}
