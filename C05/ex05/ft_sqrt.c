/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:22:55 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/17 09:41:38 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	printf("Sqr di -9 = %d\n", ft_sqrt(-9));
	printf("Sqr di 0 = %d\n", ft_sqrt(0));
	printf("Sqr di 1 = %d\n", ft_sqrt(1));
	printf("Sqr di 64 = %d\n", ft_sqrt(64));
	printf("Sqr di 57 = %d\n", ft_sqrt(57));
	return (0);
}*/
