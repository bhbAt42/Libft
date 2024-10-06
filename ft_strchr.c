/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:30:27 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/03 20:30:27 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		*str++;
	}
	return (NULL);
}