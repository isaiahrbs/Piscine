/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:35:10 by irobinso          #+#    #+#             */
/*   Updated: 2024/08/31 17:06:43 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	unsigned int	n = 1;
	char s1[] = "A";
	char s2[] = "Z";
	unsigned int	len = ft_strncmp(s1, s2, n);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("difference ascii: %d\n", len);
	return (0);
}*/
