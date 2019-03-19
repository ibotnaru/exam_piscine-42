/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:55:27 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 15:52:37 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : first_word
**	Expected files   : first_word.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that takes a string and displays its first word, followed by a
**	newline.
**
**	A word is a section of string delimited by spaces/tabs or by the start/end of
**	the string.
**
**	If the number of parameters is not 1, or if there are no words, simply display
**	a newline.
**
**	Examples:
**
**	$> ./first_word "FOR PONIES !!" | cat -e
**	FOR$
**	$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
**	this$
**	$> ./first_word "   " | cat -e
**	$
**	$> ./first_word "a" "b" | cat -e
**	$
**	$> ./first_word "  lorem,ipsum  " | cat -e
**	lorem,ipsum$
**	$>
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int    i;
		int    flag;

		i = 0;
		flag = 0;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				if (flag == 0)
				{
					i++;
					continue ;
				}
				break ;
			}
			write(1, &av[1][i], 1);
			flag = 1;
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
