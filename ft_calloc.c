/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:47:40 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/13 23:44:32 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;

	dest = (void *)malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, number * size);
	return (dest);
}