/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:23:12 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/09 14:44:42 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		a = *a /  *b;
	int		b = *a % *b;
}

int		main(void)
{
	int		a;
	a = 2;
	int		b;
	b = 1;

	ft_ultimate_div_mod(2, 1);
	printf(%d, %d, a, b);
	return (0);
}

