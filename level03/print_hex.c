/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:15:48 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/13 16:48:58 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : print_hex
**	Expected files   : print_hex.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes a positive (or zero) number expressed in base 10,
**	and displays it in base 16 (lowercase letters) followed by a newline.
**	
**	If the number of parameters is not 1, the program displays a newline.
**	
**	Examples:
**	
**	$> ./print_hex "10" | cat -e
**	a$
**	$> ./print_hex "255" | cat -e
**	ff$
**	$> ./print_hex "5156454" | cat -e
**	4eae66$
**	$> ./print_hex | cat -e
**	$
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>
//#include <stdio.h>
int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (10 * num) + str[i] - '0';
		i++;
	}
	return (sign * num);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_hex(int num)
{
	if (num >= 16)
	{
		print_hex(num / 16);
		print_hex(num % 16);
	}
	else if (num >= 10)
		ft_putchar(num + 87);
	else
		ft_putchar(num + 48);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int     num;

        num = ft_atoi(av[1]);
	    print_hex(num);
    }
    write(1, "\n", 1);
	//printf("\n%x\n", 74837);
	return (0);
}
