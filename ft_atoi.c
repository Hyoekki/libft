/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 07:06:33 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 08:51:08 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;
	long long	check;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		check = result * 10 + (*str - '0');
		if (check / 10 != result && sign < 0)
			return (-1);
		if (check / 10 != result && sign > 0)
			return (0);
		result = check;
		str++;
	}
	return ((int)result * sign);
}
