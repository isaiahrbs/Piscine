/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:48:33 by irobinso          #+#    #+#             */
/*   Updated: 2024/08/21 15:45:32 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	xx;

	xx = '0';
	while (xx <= '9')
	{
		write(1, &xx, 1);
		xx += 1;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}


write(1, "0123456789", 10)*/
