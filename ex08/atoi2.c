/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:29:20 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/16 17:48:42 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		a;
	int		n;
	int		val;

	a = 0;
	n = 1;
	val = 0;
	while(str[a] == ('\n'| '\t'| '\f'| '\r'| ' '))
		{
		a++;
		}
		if(str[a] == '-')
	{
		n = - 1;
		a++;
	}
		if(str[a] == '+')
		{
			n = 1;
			a++;
		}
	if(str[a] > 57 || str[a] < 48)
	{
		return (0);
	}
	if(str[a] <= 57 && str[a] >= 48 )
		{
			val = a * 10 - (a - 48);
			a++;
		}
	return (val * n);
}

int		main(void)
{
char	str[] ="   456 .. 3gr";
printf("%s\n%d", str, ft_atoi(str));
return (0);
}
