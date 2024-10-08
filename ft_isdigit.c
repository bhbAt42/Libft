/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:02:51 by bruno             #+#    #+#             */
/*   Updated: 2024/10/01 16:04:21 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}