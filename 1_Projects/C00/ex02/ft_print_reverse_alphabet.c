/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonge <mmonge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:54:02 by mmonge            #+#    #+#             */
/*   Updated: 2023/02/09 15:56:46 by mmonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letters;

	letters = 'z';
	while (letters >= 'a')
	{
		write(1, &letters, 1);
		letters--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
