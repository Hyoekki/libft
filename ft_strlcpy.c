/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 07:26:47 by jhyokki           #+#    #+#             */
/*   Updated: 2024/10/31 11:23:41 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;

	s = src;
	if (size)
	{
		while (*s && --size)
			*dst++ = *s++;
		*dst = '\0';
	}
	while (*s++)
		;
	return (s - src - 1);
}
