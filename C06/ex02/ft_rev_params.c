/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:41:32 by irobinso          #+#    #+#             */
/*   Updated: 2024/09/04 13:43:58 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = argc - 1;
	while (c != 0)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c--;
	}
	return (0);
}
