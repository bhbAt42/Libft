/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:41:10 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/05 12:44:57 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if (size > 0)
    {
        i = 0;
        while ((i < size - 1) && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return ft_strlen(src);
}
