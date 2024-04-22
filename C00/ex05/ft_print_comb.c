/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:44:36 by sgarigli          #+#    #+#             */
/*   Updated: 2023/09/11 09:48:42 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	v[5];

	v[0] = '0';
	v[3] = ',';
	v[4] = ' ';
	while (v[0] <= '7')
	{
		v[1] = v[0] + 1;
		while (v[1] <= '8')
		{
			v[2] = v[1] + 1;
			while (v[2] <= '9')
			{
				if (v[2] == '9' && v[1] == '8' && v[0] == '7')
					write (1, &v, 3);
				else
					write (1, &v, 5);
				v[2]++;
			}
			v[1]++;
		}
		v[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/