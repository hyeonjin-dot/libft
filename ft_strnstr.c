/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:44:01 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/07 17:02:46 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	litlen;

	i = 0;
	litlen = ft_strlen(lit);
	if (litlen == 0 || len == 0)
		return ((char*)big);
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
