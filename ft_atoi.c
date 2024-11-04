/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 07:06:33 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/04 11:10:35 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int result;

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
		if (ft_strlen(str) > 18 && sign > 0)
			return (-1);
		if (ft_strlen(str) > 18 && sign < 0)
			return (0);
		else
			result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
