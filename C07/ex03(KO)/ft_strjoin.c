/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:54:53 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/23 13:26:15 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	res = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*tab[4];
	tab[0] = "12";
	tab[1] = "23";
	tab[2] = "34";
	tab[3] = "45";
	printf("%s", ft_strjoin(4, tab, "ciao"));
	return (0);
}*/
