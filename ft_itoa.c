/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:15:18 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:03:38 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes integer n and returns character string s. Calculate integer lenght and
allocate corerct amount of memory for return string. Perform NULL check.
Handle negative sign and start appending digits using modulo sign while len does
not equal to zero.
 */
#include <stdlib.h>
#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	if (n < 0)
		n *= -1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = get_num_len(num);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len-- && num != 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}
