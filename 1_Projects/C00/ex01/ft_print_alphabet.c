/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonge <mmonge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:31:46 by mmonge            #+#    #+#             */
/*   Updated: 2023/02/09 12:56:26 by mmonge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letters;

	letters = 'a';
	while (letters <= 'z')
	{
		write(1, &letters, 1);
		letters++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
