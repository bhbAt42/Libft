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

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int k;
	
	i = 0;
	k = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{	
			k = i;
			while (needle[j] == haystack[i])
			{
				if((needle[j] != haystack[i]) && needle[j] != '\0')
					break ;
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)haystack + k);
		}
		i++;
	}
	return (NULL);
}