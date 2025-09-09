/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:04:46 by irobinso          #+#    #+#             */
/*   Updated: 2024/09/04 13:09:17 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int ft_iterative_power(int nb, int power)
{
    int x;
    int result;

    x = nb;
	result = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (power != 1)
    {
        nb *= x;
        power--;
    }
    return (result);
}

int main()
{
  int numb;
  int powr;
  
  powr = 4;
  numb = 5;
  ft_iterative_power(5, 4);
  return (0);
}
*/
//                        how i did it first.

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
// how i have to do it.
