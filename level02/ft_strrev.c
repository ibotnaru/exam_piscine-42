/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:55:35 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/29 14:57:18 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_strrev
**	Expected files   : ft_strrev.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**	
**	Write a function that reverses (in-place) a string.
**	
**	It must return its parameter.
**	
**	Your function must be declared as follows:
**	
**	char    *ft_strrev(char *str);
**
**>>>>>>>>>> FAILURE <<<<<<<<<<
*/

char    *ft_strrev(char *str)
{
    int     i;
    int     len;
    char    temp;

    i = 0;
    len = 0;
    while (str[len])
    {
        len++;
    }
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        
        i++;
        len--;
    }
    return (str);
}
/*int main (void)
{
    int i = 0;
    char arr[19] = "1hello45897world6";
    ft_strrev(arr);
    while (i < 19)
    {
        printf("%c", arr[i]);
        i++;
    }
    return (0);
}*/