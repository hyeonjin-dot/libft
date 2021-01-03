/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:44:01 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/01 18:30:11 by jeonghyeo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	litlen;
	int		k;

	i = 0;
	k = 0;
	if (lit == NULL)
		return ((char*)big);
	while ((char)lit[k] != '\0')
		k++;
	litlen = k;
	while (i < len)
	{
		if (*(char*)big == *(char*)lit)
			lit++;
		big++;
		if (*(char*)lit == '\0')
			return ((char*)(big - litlen));
		i++;
	}
	return (0);
}
