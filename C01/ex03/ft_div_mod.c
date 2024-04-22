/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:46:32 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/11 13:59:55 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div = &a;
	int	*mod = &b;

	a = 0;
	b = 0;
	ft_div_mod(a, b, div, mod);
	printf("Il risultato della divisione e': %d con resto %d\n",*div,*mod);
	return(0);
}*/
