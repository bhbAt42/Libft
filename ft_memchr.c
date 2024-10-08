/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:43:39 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/07 15:43:39 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char *ch;
	size_t	i;

	str = (unsigned char *)s;
	ch = (unsigned char *)c;
	i = 0;
	while (n > i)
	{
		if (str[i] == c)
			return (*(str + i));
		i++;
	}
	return (NULL);
}