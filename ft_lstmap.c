/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 16:16:30 by hyejung           #+#    #+#             */
/*   Updated: 2021/01/01 18:58:24 by jeonghyeo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	int		size;

	size = ft_lstsize(lst);
	new = (t_list)malloc(sizeof(t_list) * size);
	if (new == NULL)
		return ;
	ft_lstiter(new, *f);
	free(new);
	return (new);
}
