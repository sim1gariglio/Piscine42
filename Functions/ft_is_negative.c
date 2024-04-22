/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:27:23 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/06 10:27:23 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else if (n >= 0)
	{
		write (1, "P", 1);
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = -42;
	c = 42;
	ft_is_negative(a);
	ft_is_negative(b);
	ft_is_negative(c);
	return (0);
}*/
