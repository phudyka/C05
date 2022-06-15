/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:14:39 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/16 18:24:07 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = nb * res;
		power--;
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
    printf("Puissance = %d\n", ft_iterative_power(1, 0));
	return (0);
}*/
