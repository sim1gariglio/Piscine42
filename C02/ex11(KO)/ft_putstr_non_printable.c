/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:36:02 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/20 17:20:27 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c)
{
	if (c < 16)
		ft_putchar(0 + '0');
	if (c > 15)
		ft_putchar(1 + '0');
	if (c < 10 || (c < 26 && c > 15))
		ft_putchar(c % 16 + '0');
	else
	{
		if (c % 16 == 10)
			ft_putchar('a');
		if (c % 16 == 11)
			ft_putchar('b');
		if (c % 16 == 12)
			ft_putchar('c');
		if (c % 16 == 13)
			ft_putchar('d');
		if (c % 16 == 14)
			ft_putchar('e');
		if (c % 16 == 15)
			ft_putchar('f');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] == 127)
		{
			if (str[i] == 127)
			{
				write (1, "7", 1);
				write (1, "f", 1);
			}
			else
			{
				write (1, "\\", 1);
				ft_hexa(str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("C1\tu'127'cou\ntu vas bien ?");
	return (0);
}*/
