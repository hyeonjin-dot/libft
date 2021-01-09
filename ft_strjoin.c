/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:54:33 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/08 21:41:12 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(new = (char*)malloc(sizeof(char) * (s1_len + s2_len))))
		return (0);
	while (i < s1_len)
	{
		*(new + i) = *(s1 + i);
		i++;
	}
	while (i < s1_len + s2_len)
		*(new + i++) = *(s2 + j++);
	*(new + i) = '\0';
	return (new);
}
