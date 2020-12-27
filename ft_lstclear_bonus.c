/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:17:57 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/14 20:48:33 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *t))
{
	t_list *p;
	t_list *q;

	if (*lst != NULL && del)
	{
		p = *lst;
		while (p != NULL)
		{
			q = p;
			p = p->next;
			del(q->content);
			free(q);
		}
		*lst = NULL;
	}
}
