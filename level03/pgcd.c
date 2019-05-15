/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:30:40 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/15 15:31:07 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NEED EVALUATION

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int     num1;
        int     num2;

        num1 = atoi(av[1]);
        num2 = atoi(av[2]);
        if (num1 > 0 && num2 > 0)
        {
            while(num1 != num2)
            {
                if (num1 > num2)
                    num1 -= num2;
                else
                    num2 -= num1;
            }
            printf("%d", num1);
        }
    }
    printf("\n");
    return (0);
}