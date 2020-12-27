/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:45:58 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/12 21:21:47 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t slen;
	size_t dlen;
	size_t i;
	size_t j;

	slen = ft_strlen(src);
	if (!dst && size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	else
	{
		i = dlen;
		j = 0;
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (slen + dlen);
	}
}
