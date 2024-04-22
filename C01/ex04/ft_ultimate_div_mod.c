/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:01:52 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/11 17:26:10 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 100;
	d = 3;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("Il risultato della divisione e': %d con resto %d\n",*a,*b);
	return(0);
}*/
