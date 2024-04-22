/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:53:27 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/21 12:28:54 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (max <= min)
	{
		return (NULL);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		range[j] = i;
		i++;
		j++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*ptr;

	min = 1;
	max = 100;	
	ptr = ft_range (min, max);
	max = max - min;
	min = 0;
	while (min < max)
	{
		printf("%d ", ptr[min]);
		min++;
	}
	return (0);
}*/
