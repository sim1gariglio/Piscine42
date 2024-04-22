/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:35:47 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/19 12:40:51 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*newsrc;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	newsrc = (char *) malloc((len + 1) * sizeof (char));
	if (!(newsrc))
		return (NULL);
	while (src[i])
	{
		newsrc[i] = src[i];
		i++;
	}
	newsrc[i] = '\0';
	return (newsrc);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strdup(argv[1]));
	return (0);
}*/
