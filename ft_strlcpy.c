/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:24:23 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/28 20:40:50 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_len;

	i = 0;
	src_len = 0;
	while ((char)(src[src_len]))
		src_len++;
	if (src_len != 0)
	{
		while ((i < size) && (i < src_len))
		{
			dst[i] = *(char*)src;
			i++;
			src++;
		}
	}
	dst[i] = '\0';
	return (src_len);
}
