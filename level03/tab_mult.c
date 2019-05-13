/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 22:07:20 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/12 22:23:15 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : tab_mult
**	Expected files   : tab_mult.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a program that displays a number's multiplication table.
**
**	The parameter will always be a strictly positive number that fits in an int,
**	and said number times 9 will also fit in an int.
**
**	If there are no parameters, the program displays \n.
**
**	Examples:
**
**	$>./tab_mult 9
**	1 x 9 = 9
**	2 x 9 = 18
**	3 x 9 = 27
**	4 x 9 = 36
**	5 x 9 = 45
**	6 x 9 = 54
**	7 x 9 = 63
**	8 x 9 = 72
**	9 x 9 = 81
**	$>./tab_mult 19
**	1 x 19 = 19
**	2 x 19 = 38
**	3 x 19 = 57
**	4 x 19 = 76
**	5 x 19 = 95
**	6 x 19 = 114
**	7 x 19 = 133
**	8 x 19 = 152
**	9 x 19 = 171
**	$>
**	$>./tab_mult | cat -e
**	$
**	>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

int		ft_atoi(char *s)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	if (s[i] == '+')
        i++;
    else if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
	while (s[i] >= '0' && '9' >= s[i])
		{
            num = (num * 10) + (s[i] - '0');
            i++;
        }
	return (num * sign);
}

void	ft_putnbr(int num)
{
	char	c;

	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
int		main(int ac, char **av)
{
	int		i;
	int		num;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		num = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}