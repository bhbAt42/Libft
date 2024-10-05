/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:26:55 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 18:26:55 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	char	*src;
	char	*dst;
	size_t	i;

	src = (char *)source;
	dst = (char *)dest;
	i = 0;
	if (dst > src)
	{
		i = len;
		while (i--)
			dst[i] = src[i]; 
	} else 
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dest);
}
