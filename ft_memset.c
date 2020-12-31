/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:13:36 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/21 18:13:43 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *start, int num, size_t size)
{
	size_t	i;
	void	*str;

	i = 0;
	str = start;
	if (!start)
		return (0);
	while (i < size)
	{
		*(unsigned char *)(str + i) = (unsigned char)num;
		i++;
	}
	return (start);
}
