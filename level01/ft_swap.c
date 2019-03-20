/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 20:48:30 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/19 20:50:37 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_swap
**	Expected files   : ft_swap.c
**	Allowed functions:
**	--------------------------------------------------------------------------------
**
**	Write a function that swaps the contents of two integers the adresses of which
**	are passed as parameters.
**
**	Your function must be declared as follows:
**
**	void	ft_swap(int *a, int *b);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

void	ft_swap(int *a, int *b)
{
	int    temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
