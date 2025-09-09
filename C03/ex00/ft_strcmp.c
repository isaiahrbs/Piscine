/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:39:41 by irobinso          #+#    #+#             */
/*   Updated: 2024/08/29 07:44:37 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}	
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "XXXX";
	char	s2[] = "XXXL";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
