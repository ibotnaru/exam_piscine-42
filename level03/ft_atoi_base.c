/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:56:12 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/15 17:57:57 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Assignment name  : ft_atoi_base
**  Expected files   : ft_atoi_base.c
**  Allowed functions: None
**  --------------------------------------------------------------------------------
**
**  Write a function that converts the string argument str (base N <= 16)
**  to an integer (base 10) and returns it.
**
**  The characters recognized in the input are: 0123456789abcdef
**  Those are, of course, to be trimmed according to the requested base. For
**  example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
**
**  Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
**
**  Minus signs ('-') are interpreted only if they are the first character of the
**  string.
**
**  Your function must be declared as follows:
**
**  int	ft_atoi_base(const char *str, int str_base);
**
**  >>>>>>>>>> SUCCESS <<<<<<<<<<
*/

int		num_base(char ch, int base)
{
	if (base <= 10)
		return (ch >= '0' && ch <= '9');
	return ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= ('A' + base - 10)) || \
	(ch >= 'a' && ch <= ('a' + base - 10)));
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
	int sign;
	int num;

    if (!str[0] || (str_base < 2 || str_base > 16))
		return (0);
	sign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && num_base(str[i], str_base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			num = (num * str_base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			num = (num * str_base) + (str[i] - 'a' + 10);
		else
			num = (num * str_base) + (str[i] - '0');
		i++;
    }
	return (num * sign);
}