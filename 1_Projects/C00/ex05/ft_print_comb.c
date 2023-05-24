/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonge <mmonge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:57:58 by mmonge            #+#    #+#             */
/*   Updated: 2023/02/13 10:31:09 by mmonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdbool.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_combination(char x, char y, char z)
{
	bool	last_char;

	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	last_char = !(x == '7' && y == '8' && z == '9');
	if (last_char)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_combination(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
