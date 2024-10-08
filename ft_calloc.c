/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:47:40 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/08 09:47:40 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.c>

void	*ft_calloc(size_t num, size_t size)
{
	size_t total;
	void *ptr;
	size_t i;

	total = num * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
		*((char *)ptr + i++) = 0;
	return (ptr);
}
