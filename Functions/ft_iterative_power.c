/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:33 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/14 14:13:50 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		pow = pow * nb;
		power--;
	}
	return (pow);
}
/*
int	main(void)
{
	int	base;
	int	pow;

	base = 10;
	pow = 3;
	printf("%d alla %d = %d\n", base, pow, ft_iterative_power(base, pow));
	printf("-2893 alla -351 = %d\n", ft_iterative_power(-2893, -351));
	
	return (0);
}*/
