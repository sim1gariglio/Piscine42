/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:51:10 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/11 17:20:03 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabcount;
	int	swap;
	int	count;

	tabcount = size -1;
	count = 0;
	while (count < size / 2)
	{
		swap = tab[count];
		tab[count] = tab[tabcount];
		tab[tabcount] = swap;
		count++;
		tabcount--;
	}
}
/*
int	main(void)
{
	int	size = 7;
	int	n[7];
	int	*tab[7];
	int	i=0;
	
	n[0] = 1;
	n[1] = 10;
	n[2] = 100;
	n[3] = 1000;
	n[4] = 10000;
	n[5] = 100000;
	n[6] = 1000000;
	tab[0] =&n[0];
	tab[1] =&n[1];
	tab[2] =&n[2];
	tab[3] =&n[3];
	tab[4] =&n[4];
	tab[5] =&n[5];
	tab[6] =&n[6];
	ft_rev_int_tab(*tab, size);
	while(i < size)
        {
                printf("%d ", *tab[i]);
                i++;
        }
	return(0);
}*/
