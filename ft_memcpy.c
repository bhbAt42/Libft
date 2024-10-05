/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:15:25 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 18:15:25 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
