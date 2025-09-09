/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:28:00 by irobinso          #+#    #+#             */
/*   Updated: 2024/09/04 16:36:49 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb - 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (x > 0)
	{
		nb = nb * x;
		x--;
	}
	return (nb);
}

/*int	main(void)
{
	int	numb;

	numb = 5;
	ft_iterative_factorial(numb);
	printf("%d\n", ft_iterative_factorial(numb));
	return (0);
}*/
