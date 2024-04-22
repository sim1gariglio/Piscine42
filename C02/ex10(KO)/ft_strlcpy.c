/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:40:03 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/20 13:00:08 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;
	int	i;

	len = ft_strlen(src);
	i = 0;
	while (src[i] && size - 1 > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char dest[] = "as";
	char src[] = "ads";

	ft_strlcpy(dest, src,0);
	printf("%s", dest);
	return (0);
}*/
