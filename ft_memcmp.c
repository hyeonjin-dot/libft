/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:40:24 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/22 19:16:42 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *fir, const void *sec, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*(unsigned char *)fir == *(unsigned char *)sec)
		{
			i++;
			fir++;
			sec++;
		}
		else
			return (*(unsigned char*)fir - *(unsigned char*)sec);
	}
	return (0);
}
