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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t lendest;
    size_t lensrc;
    size_t i;
    size_t j;

    lendest = ft_strlen(dst);
    lensrc = ft_strlen(src);

    if (size <= lendest)
        return (lensrc + size);

    i = lendest;
    j = 0;
    while (src[j] && (i + 1) < size)
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';

    return (lendest + lensrc);
}