/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonge <mmonge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:14:55 by mmonge            #+#    #+#             */
/*   Updated: 2023/02/09 11:49:58 by mmonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('M');
	ft_putchar('\n');
}*/
