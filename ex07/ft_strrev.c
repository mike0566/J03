/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:10:44 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/15 09:35:20 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int a;
	int b;
	int c;

		a = 0;
		b = 0;
		c = 0;
	while (str[b] != '\0')
		{
			b++;
		}
	while(a < b / 2)
	{
	c = str[ b -1 -a];
	str[b -1 -a] = str[a];
	str[a] = c;
	a++;
	}
	return(str);
}

int		main(void)
{
char	str[] = "couillon de la lune";
ft_strrev(str);
printf("%s", str);
return (0);
}
