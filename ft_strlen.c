/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:17:29 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/12 10:03:01 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Calculates the number of characters in a string *s by subtracting the first
pointer from the last.
 */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
