/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:36:51 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/20 10:50:24 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	word_check(char *str, int i)
{
	if (!((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (word_check (str, 0) == 1 && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (word_check (str, i) == 0)
			i++;
		else if ((str[i] >= 'a' && str[i] <= 'z')
			&& (word_check (str, i - 1) == 0))
		{
			str[i] -= 32;
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (word_check (str, i - 1) == 1))
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
int	main(int arg_c, char **arg_v)
{
	if (arg_c < 2)
		return (1);
	printf ("%s", ft_strcapitalize(arg_v[1]));
	return (0);
}*/
