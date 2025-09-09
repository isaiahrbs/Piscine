/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:27:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 13:12:50 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char *source = "hello";
    char *dup = ft_strdup(source);

    if (dup != NULL) {
        printf("%s\n", dup);
        free(dup);
    }
    return 0;
}*/
