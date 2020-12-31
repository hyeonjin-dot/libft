/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:02:27 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/28 21:51:01 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (!*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	k;
	size_t	z;
	char	**new;

	i = 0;
	k = 0;
	z = 0;
	if (!(new = (char**)malloc(sizeof(char*) * (check(s, c) + 2))))
		return (0);
	count = 0;
	while (z <= ft_strlen(s))
	{
		if (s[k] == c)
		{
			new[i] = (char*)malloc(sizeof(char) * (count++));
			ft_strlcpy(new[i], (s + z), (k - z));
			z = k + 1;
			i++;
		}
		k++;
	}
	free(new);
	return (new);
}
