/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:33:40 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 15:33:40 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	if (n == 0)
		return (s);
	unsigned char	*ptr = (unsigned char *)s;
	unsigned char	value = (unsigned char)c;
	while (n > 0)
	{
		*ptr++ = value;
		n--;
	}
	return (s);
}
