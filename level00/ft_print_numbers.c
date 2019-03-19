/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 15:04:27 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/03/18 15:12:40 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : ft_print_numbers
**	Expected files   : ft_print_numbers.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**
**	Write a function that displays all digits in ascending order.
**
**	Your function must be declared as follows:
**
**	void	ft_print_numbers(void);
**
**>>>>>>>>>> SUCCESS <<<<<<<<<<
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	write (1, "0123456789", 10);
}
