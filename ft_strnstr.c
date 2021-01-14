/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:44:01 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/14 19:48:12 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(lit) == 0 && *big)
		return ((char*)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == lit[j] && i + j < len)
		{
			j++;
			if (lit[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (0);
}
