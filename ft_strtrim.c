/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:47:46 by cabouelw          #+#    #+#             */
/*   Updated: 2019/11/01 12:05:54 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s || !set)
		return (s == NULL ? NULL : ft_strdup(s));
	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	j = ft_strlen(s) - 1;
	while (j > 0 && ft_strchr(set, s[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	return (ft_substr(s, i, j - i + 1));
}
