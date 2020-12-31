/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:54:33 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/25 21:08:49 by hyejung          ###   ########.fr       */
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

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char*)malloc(s1_len + s2_len + 1);
	while (i < s1_len)
	{
		*(new + i) = *(s1 + i);
		i++;
	}
	while (i < s1_len + s2_len)
	{
		*(new + i) = *(s2 + j);
		i++;
		j++;
	}
	*(new + i) = '\0';
	return (new);
}
