/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:23:12 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/11 16:34:48 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
		*a = *a /  *b;
		*b = *a % *b;
}

int		main(void)
{
	int		q;
	int		w;
	int		*a;
	int		*b;

	a = &q;
	b = &w;
	q = 12;
	w = 5;

	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
	return (0);
}

