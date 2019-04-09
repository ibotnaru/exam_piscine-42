/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:33:44 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/04/08 20:35:41 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_atoi
**	Expected files   : ft_atoi.c
**	Allowed functions: None
**	--------------------------------------------------------------------------------
**	
**	Write a function that converts the string argument str to an integer (type int)
**	and returns it.
**	
**	It works much like the standard atoi(const char *str) function, see the man.
**	
**	Your function must be declared as follows:
**	
**	int	ft_atoi(const char *str);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/
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
