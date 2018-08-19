/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:29:20 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/19 16:06:56 by ahequet          ###   ########.fr       */
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
	while(str[a] == '\n'|| str[a] == '\t'|| str[a] == '\f'||
			str[a] == '\r'|| str[a] == ' ')
		{
		a++;
		}
		if(str[a] == '-' && str[a + 1] == '+')
		{
			return (0);
		}
		if(str[a] == '+' && str[a + 1] == '-')
		{
			return (0);
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
	while(str[a] <= '9' && str[a] >= '0' )
		{
			val = val * 10 +  (str[a] - '0');
			a++;
		}
	return (val * n);
}

int		main(void)
{
char	str[] ="  +  -12 3456789 .. agr";
printf("%s\n%d", str, ft_atoi(str));
return (0);
}
