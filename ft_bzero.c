/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:07:21 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 18:07:21 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    if (s == NULL)
        return;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = 0;
}
