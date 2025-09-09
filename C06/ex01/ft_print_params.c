/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:29:20 by irobinso          #+#    #+#             */
/*   Updated: 2024/09/04 13:43:05 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		index = 0;
		while (argv[counter][index] != '\0')
		{
			write(1, &argv[counter][index], 1);
			index++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
