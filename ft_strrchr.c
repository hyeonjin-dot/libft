/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <hyejung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:34:33 by hyejung           #+#    #+#             */
/*   Updated: 2020/12/23 17:42:16 by hyejung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (str[i] != '\0')
	{
		if ((char)str[i] == (char)n)
			max = i;
		i++;
	}
	if (max == 0)
		return (0);
	else
		return ((char*)(str + max));
}
