/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:26:02 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 18:56:00 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ulstr
**	Expected files   : ulstr.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that takes a string and reverses the case of all its letters.
**	Other characters remain unchanged.
**
**	You must display the result followed by a '\n'.
**
**	If the number of arguments is not 1, the program displays '\n'.
**
**	Examples :
**
**	$>./ulstr "PeTEr PIpeR pICKeD A PeCK of pIckLEd PEPPers." | cat -e
**	pEteR piPEr PickEd a pEck OF PiCKleD peppERS.$
**	$>./ulstr "A pEcK OF picKLED pePPErS PeTEr PIpeR picked.  " | cat -e
**	a PeCk of PICkled PEppeRs pEteR piPEr PICKED.  $
**	$>./ulstr | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int    i;

		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				{
					av[1][i] = av[1][i] - 32;
					write(1, &av[1][i], 1);
				}
				else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					av[1][i] = av[1][i] + 32;
					write(1, &av[1][i], 1);
				}
				else
					write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
