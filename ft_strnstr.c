/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:52:26 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 20:52:26 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    for (i = 0; haystack[i] && i < len; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = 0; needle[j] && haystack[i + j] && i + j < len && haystack[i + j] == needle[j]; j++);
            if (!needle[j])
                return ((char *)haystack + i);
        }
    }
    return (NULL);
}
