/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:24:34 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/14 12:05:38 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (*to_find == 0)
		return (str);
	while (to_find[len])
		len++;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == len - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main ()
{
 	char	str[] ="Frase di prova";
 	char	to_find[] = "di pr";	
	printf("Copia: %s\n", ft_strstr(str, to_find));
	printf("Originale: %s", strstr(str, to_find));
 	return 0;
}*/
