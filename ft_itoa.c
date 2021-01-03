/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:13:59 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/01 18:29:02 by jeonghyeo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check(int n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*new;

	minus = (n < 0 ? -1 : 1);
	i = check(n);
	new = (char*)malloc(sizeof(char) * i);
	if (new == NULL)
		return (0);
	new[i] = '\0';
	if (minus < 0)
	{
		new[0] = '-';
		n = -n;
	}
	i--;
	while (n > 10)
	{
		new[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	new[i] = n + '0';
	return (new);
}
