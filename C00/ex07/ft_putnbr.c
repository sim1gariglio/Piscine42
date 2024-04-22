/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:01:49 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/07 15:07:07 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
/*
int main (void)
{
	int a,b,c,d,e;
	a = 113;
	b = 2147483647;
	c = -2147483648;
	d = 42;
	e = -42;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putnbr(c);
	ft_putnbr(d);
	ft_putnbr(e);
	return(0);
}*/
