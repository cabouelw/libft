/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:51:09 by cabouelw          #+#    #+#             */
/*   Updated: 2019/10/31 20:52:05 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *s;

	if (!(s = (unsigned char*)malloc(size * count)))
		return (NULL);
	ft_bzero(s, size * count);
	return ((void*)s);
}
