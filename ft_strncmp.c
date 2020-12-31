/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 18:20:26 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/23 18:29:00 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	while (i < n)
	{
		if ((char)str1[k] == (char)str2[k])
		{
			i++;
			k++;
		}
		else
			return ((char)str1[k] - (char)str2[k]);
	}
	return (0);
}
