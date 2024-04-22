/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:00:52 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/27 09:38:54 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *tab)
{
	int	len;

	len = 0;
	while (tab[len] != 0)
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int size)
{
	char	*strcpy;
	int		i;

	strcpy = (char *)malloc (sizeof(char) * (size + 1));
	i = 0;
	while (str[i] != 0)
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strcpy(tab[i].str, tab[i].size);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = NULL;
	tab[i].copy = NULL;
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	t_stock_str	*str_array = ft_strs_to_tab(argc -1, &argv[1]);
	int	i;

	i = 0;
	while (str_array[i].str != NULL)
	{
		printf("Stringa: %s\n", str_array[i].str);
		printf("Lunghezza: %d\n", str_array[i].size);
		printf("Copia: %s\n", str_array[i].copy);
		i++;
	}
	free(str_array);
	return (0);
}*/
