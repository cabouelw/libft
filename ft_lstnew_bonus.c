/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:18:47 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/14 20:46:51 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *t_lt;

	if (!(t_lt = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	t_lt->content = content;
	t_lt->next = NULL;
	return (t_lt);
}
