/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 22:10:41 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/01 18:28:36 by jeonghyeo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check(char c, char const *set, size_t setlen)
{
	size_t	i;

	i = 0;
	while (i < setlen)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	set_len;
	size_t	end;
	size_t	i;
	size_t	k;
	char	*new;

	k = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	set_len = ft_strlen(set);
	while (s1[i] != '\0' && (check(s1[i], set, set_len) == 1))
		i++;
	while (end > i && (check(s1[end], set, set_len) == 1))
		end--;
	new = (char*)malloc(sizeof(*s1) * (end - i + 1));
	if (new == NULL)
		return (0);
	while (i <= end)
	{
		*(new + k) = s1[i];
		i++;
		k++;
	}
	*(new + k) = '\0';
	return (new);
}
