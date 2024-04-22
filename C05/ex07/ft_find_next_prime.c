/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:07:58 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/17 12:16:27 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	flag;

	flag = 0;
	flag = ft_is_prime(nb);
	while (flag != 1)
	{
		nb++;
		flag = ft_is_prime(nb);
	}
	return (nb);
}

int	main(void)
{
	int	i = 2147483647;
	printf("%d %d\n",i ,ft_find_next_prime(i));
	return (0);
}
