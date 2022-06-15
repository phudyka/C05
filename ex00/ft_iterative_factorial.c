/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:13:43 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/15 20:12:41 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb != 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*#include <stdio.h>
int main(void)
{
    printf("Factorielle = %d\n", ft_iterative_factorial(46430));
	return (0);
}*/
