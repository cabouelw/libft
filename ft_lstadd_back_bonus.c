/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:17:34 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/14 20:47:16 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *t_lt;

	if (*alst == NULL)
		*alst = new;
	else
	{
		t_lt = *alst;
		if (new)
		{
			while (t_lt->next != NULL)
				t_lt = t_lt->next;
			t_lt->next = new;
			new->next = NULL;
		}
	}
}
