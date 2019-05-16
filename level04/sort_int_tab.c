/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 21:08:59 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/15 21:10:33 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Assignment name  : sort_int_tab
**  Expected files   : sort_int_tab.c
**  Allowed functions:
**  --------------------------------------------------------------------------------
**
**  Write the following function:
**
**  void sort_int_tab(int *tab, unsigned int size);
**
**  It must sort (in-place) the 'tab' int array, that contains exactly 'size'
**  members, in ascending order.
**
**  Doubles must be preserved.
**
**  Input is always coherent.
**
**  >>>>>>>>>> SUCCESS <<<<<<<<<<
*/

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}