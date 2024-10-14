/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:43:39 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/13 23:46:43 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    unsigned char *p;

    p = (unsigned char *)str;
    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return (&p[i]);
        i++;
    }
    return (NULL);
}

