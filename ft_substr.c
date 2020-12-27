/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:52:08 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/01 18:14:04 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t n)
{
	char	*dst;
	size_t	i;
	size_t	len;

	i = 0;
	if (!src)
		return (NULL);
	if (start > ft_strlen(src))
		return (ft_strdup(""));
	len = ft_strlen(src + start);
	if (n > len)
		n = len;
	if ((dst = (char *)malloc(sizeof(char) * n + 1)) == NULL)
		return (NULL);
	ft_memcpy(dst, src + start, n);
	dst[n] = '\0';
	return (dst);
}
