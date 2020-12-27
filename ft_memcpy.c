/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:44:02 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/17 18:22:28 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if ((!dst && !src))
		return (NULL);
	if (ft_memcmp(dst, src, n) == 0)
		return (dst);
	s = (unsigned char*)src;
	d = dst;
	while (n--)
	{
		*(d++) = *(s++);
	}
	return (dst);
}
