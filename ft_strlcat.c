/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:48:06 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/05 12:55:30 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size)
{
	int	lendest;
	int i;
	int j;

	lendest = ft_strlen(dst);
	i = lendest;
	j = 0;
	if (size > lendest)
	{
		while (size - 1 > i) 
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (ft_strlen(dst));
}