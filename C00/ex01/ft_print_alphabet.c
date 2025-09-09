/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:17:34 by irobinso          #+#    #+#             */
/*   Updated: 2024/08/21 19:53:14 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	yy;

	yy = 'a';
	while (yy <= 'z')
	{
		write(1, &yy, 1);
	yy++;
	}
}

/*int	main()
{
	ft_print_alphabet();
}*/
