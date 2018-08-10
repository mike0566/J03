/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:53:39 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/09 11:21:30 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}

int		main(void)
{
	int		a;
	int		b;
	int		*mod;
	int		*div;

	ft_div_mod(9, 3, mod, div);
	printf("mod : %d, div : %d",  *mod, *div);
	return (0);
}
