/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 21:02:21 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/15 21:02:40 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Write the following function:
**
**  int     *ft_rrange(int start, int end);
**
**  It must allocate (with malloc()) an array of integers, fill it with consecutive
**  values that begin at end and end at start (Including start and end !), then
**  return a pointer to the first value of the array.
**
**  Examples:
**
**  - With (1, 3) you will return an array containing 3, 2 and 1
**  - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
**  - With (0, 0) you will return an array containing 0.
**  - With (0, -3) you will return an array containing -3, -2, -1 and 0.
**
**  >>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}
