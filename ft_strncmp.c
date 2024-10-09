/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:18:46 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 12:31:24 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n < 1)
        return (0);
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
