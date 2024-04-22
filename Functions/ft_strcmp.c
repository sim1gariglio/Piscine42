/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:55:31 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/15 11:26:02 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0))
			i++;
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "eoloadsfdsf";
	char	s2[] = "eolofsdasdasdasd";

	printf("Originale :%d\n", strcmp(s1, s2));
	printf("Copia :%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
