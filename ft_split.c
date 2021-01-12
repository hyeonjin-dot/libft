/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:02:27 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/12 19:45:31 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i])
			i++;
	}
	return (j);
}

char	**makemalloc(char const *s, char **new, char c)
{
	size_t	k;
	size_t	z;
	int		i;

	k = 0;
	i = 0;
	while (s[k])
	{
		if (s[k] != c)
		{
			z = k;
			while (s[k] != c && s[k] != 0)
				k++;
			if (!(new[i] = (char*)malloc(sizeof(char) * (k - z + 1))))
			{
				while (i--)
					free(new[i]);
				free(new);
				return (0);
			}
			ft_strlcpy(new[i++], (s + z), (k - z + 1));
		}
		else
			k++;
	}
	new[i] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	if (!(new = (char**)malloc(sizeof(char*) * (check(s, c) + 1))))
		return (0);
	new = makemalloc(s, new, c);
	return (new);
}
