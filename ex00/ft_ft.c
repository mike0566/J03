/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:57:32 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/08 11:30:57 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int		main(void)
{
	int		a;
	int		*nbr;

	a = 42;
	nbr = &a;
	ft_ft(nbr);
	printf("%d", a);
	return (0);
}
