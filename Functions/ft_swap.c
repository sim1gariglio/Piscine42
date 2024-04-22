/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:04:41 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/11 13:45:03 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	 main(void)
{
	int	*a;
	int	*b;
	int	A;
	int	B;

	A = 42;
	B = -42;
	a =  &A;
	b = &B;
	printf("Prima: ");
	printf("%d ", A);
	printf("%d\n", B);
	ft_swap(a, b);
	printf("Dopo: ");
    printf("%d ", A);
    printf("%d\n", B);
	return (0);
}
*/
