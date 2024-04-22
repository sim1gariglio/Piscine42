/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:08:05 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/23 11:53:05 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = (int *)malloc (sizeof (int) * (max - min));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*range;
	int	size;
	int	i;
	
	i = 0;
	min = 5;
	max = 12;
	size = ft_ultimate_range(&range, min, max);
	while(i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
