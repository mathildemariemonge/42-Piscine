/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonge <mmonge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:26:53 by mmonge            #+#    #+#             */
/*   Updated: 2023/02/09 16:42:56 by mmonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N\n", 1);
	}
	else
	{
		write (1, "P\n", 1);
	}	
}
/*int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	ft_is_negative(0);
	return (0);
}*/
