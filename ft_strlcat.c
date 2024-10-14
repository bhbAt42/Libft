/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:48:06 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/13 23:54:29 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	i;
	size_t	j;

	if (!dst || !src)
		return (0);
	lendest = ft_strlen(dst);
	i = lendest;
	j = 0;
	if (size <= lendest)
		return (size + ft_strlen(src));
	while (src[j] && (lendest + j) < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';

	return (lendest + ft_strlen(src));
}