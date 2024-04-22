/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:42:25 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/17 10:06:56 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = (nb / 2) + 1;
	while (i >= 2)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}
/*
int	main(void)
{
	int 	i;

	i = -50;
	while(i < 100)
	{
		if(ft_is_prime(i) == 1)
			printf("%d %d\n",i ,ft_is_prime(i));
		i++;
	}
	return (0);
}*/
