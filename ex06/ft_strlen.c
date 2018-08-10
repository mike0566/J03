/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:40:04 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/10 14:09:31 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		a;
		a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int		main(void)
{
	char	 *str;
	str = "test\0";

	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}
