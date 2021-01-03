/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:17:03 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/03 21:51:32 by jeonghyeo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	new_len;

	if (start > ft_strlen(s))
		return (0);
	new_len = ft_strlen(s + start);
	new = (char*)malloc(new_len + 1);
	if (new == NULL)
		return (0);
	i = 0;
	while (i < len - start)
	{
		*(new + i) = *(s + start + i);
		i++;
	}
	*(new + i) = '\0';
	free(new);
	return (new);
}
