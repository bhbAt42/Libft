/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenriqu <bhenriqu@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:30:10 by bhenriqu          #+#    #+#             */
/*   Updated: 2024/10/13 23:44:07 by bhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	sig;

	sig = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sig = -sig;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sig);
}