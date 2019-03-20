/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:10:18 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 20:07:24 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : union
**	Expected files   : union.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that takes two strings and displays, without doubles, the
**	characters that appear in either one of the strings.
**
**	The display will be in the order characters appear in the command line, and
**	will be followed by a \n.
**
**	If the number of arguments is not 2, the program displays \n.
**
**	Example:
**
**	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
**	zpadintoqefwjy$
**	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
**	df6vewg4thras$
**	$>./union "rien" "cette phrase ne cache rien" | cat -e
**	rienct phas$
**	$>./union | cat -e
**	$
**	$>
**	$>./union "rien" | cat -e
**	$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 3)
	{
		int    i;
		int    j;
		char   temp[127] = {0};

		i = 0;
		while (av[1][i])
		{
			if (temp[(int)av[1][i]] == 0)
			{
				temp[(int)av[1][i]] = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (temp[(int)av[2][j]] == 0)
			{
				temp[(int)av[2][j]] = 1;
				write(1, &av[2][j], 1);
			}
		j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
