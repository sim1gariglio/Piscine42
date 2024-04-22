/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:28:01 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/14 13:01:54 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nmb;

	sign = 0;
	nmb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	if (sign % 2 == 1)
		sign = -1;
	if (sign % 2 == 0)
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		nmb = nmb * 10;
		nmb = nmb + (*str - '0');
		str++;
	}
	return (nmb * sign);
}
/*
int	main(void)
{
	char	*s = "  -----+---1234567";

	printf("%d\n", ft_atoi(s));
	return (0);
}*/
