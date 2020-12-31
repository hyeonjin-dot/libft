/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:30:54 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/23 21:30:01 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	minus = 1;
	num = 0;
	while ((str[i] != '\0') && (checkspace((char)str[i]) == 1))
		i++;
	if ((char)str[i] == '-' || (char)str[i] == '+')
	{
		if ((char)str[i] == '-')
			minus = -minus;
		i++;
	}
	while ((char)str[i] != '\0')
	{
		if ((char)str[i] >= '0' && (char)str[i] <= '9')
			num = num * 10 + (char)str[i] - 48;
		else
			break ;
		i++;
	}
	return (minus * num);
}
