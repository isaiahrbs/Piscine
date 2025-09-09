/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:01:10 by irobinso          #+#    #+#             */
/*   Updated: 2024/09/04 16:36:22 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int main()
{
	int	coucou;

	coucou = ft_recursive_power(5, 4);
	printf("Valeur de 5 puissance 4 egal : %d\n", coucou);
	return (0);
}*/
