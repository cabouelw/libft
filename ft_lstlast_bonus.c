/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:18:28 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:18 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *t;

	if (lst)
	{
		t = lst;
		while (t->next != NULL)
		{
			t = t->next;
		}
		return (t);
	}
	return (NULL);
}
