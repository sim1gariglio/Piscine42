/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcanari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:32:55 by dcanari           #+#    #+#             */
/*   Updated: 2023/09/21 17:16:10 by dcanari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex_digit;

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			hex_digit = "0123456789abcdef"[(*str >> 4) & 0xf];
			ft_putchar(hex_digit);
			hex_digit = "0123456789abcdef"[*str & 0xf];
			ft_putchar(hex_digit);
		}
		str++;
	}
}
/*
int	main()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	 return (0);
}
*/
