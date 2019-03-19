/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 23:12:54 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/18 23:17:28 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : aff_last_param
**	Expected files   : aff_last_param.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that takes strings as arguments, and displays its last
**	argument followed by a newline.
**
**	If the number of arguments is less than 1, the program displays a newline.
**
**	Examples:
**
**	$> ./aff_last_param "Zelda" "is" "a" "boy" | cat -e
**	boy$
**	$> ./aff_last_param "I read this on internet !" | cat -e
**	I read this on internet !$
**	$> ./aff_last_param | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>
int main (int ac, char **av)
{
	if (ac >= 2)
	{
		int    last_param;
		int    i;

		i = 0;
		last_param = ac - 1;
		while(av[last_param][i])
		{
			write(1, &av[last_param][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
