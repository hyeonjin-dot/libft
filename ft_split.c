/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:02:27 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/09 22:48:54 by hyejung          ###   ########.fr       */
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
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			j++;
		i++;
	}
	return (j);
}

char	**makemalloc(char const *s, char **new, char c)
{
	size_t	k;
	size_t	i;
	size_t	z;

	k = 0;
	i = 0;
	z = 0;
	while (z <= ft_strlen(s) && s[k])
	{
		new[i] = (char*)malloc(sizeof(char) * 100);
		if (s[k] == c)
		{
			if (s[k - 1] != c && k > 0)
				ft_strlcpy(new[i++], (s + z), (k - z + 1));
			z = k + 1;
		}
		if (s[k] != c && s[k + 1] == '\0')
			ft_strlcpy(new[i++], (s + z), (k - z + 2));
		k++;
		if (new[i] == NULL)
			free(new[i]);
	}
	new[i] = NULL;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	if (!(new = (char**)malloc(sizeof(char*) * (check(s, c) + 2))))
		return (0);
	new = makemalloc(s, new, c);
	return (new);
}
