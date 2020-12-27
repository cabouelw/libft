/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:18:55 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:02 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*t_lt;

	t_lt = lst;
	i = 0;
	while (t_lt != NULL)
	{
		t_lt = t_lt->next;
		i++;
	}
	return (i);
}
