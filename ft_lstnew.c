/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgrindhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:53:10 by sgrindhe          #+#    #+#             */
/*   Updated: 2018/08/06 19:40:29 by sgrindhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlist;

	newlist = malloc(content_size);
	if (newlist == NULL)
		return (NULL);
	newlist->content = 0;
	newlist->content_size = 0;
	if (content)
	{
		newlist->content = malloc(content_size);
		if (!newlist->content)
		{
			ft_memdel((void*)&newlist);
			return (NULL);
		}
		ft_memcpy(newlist->content, content, content_size);
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}
