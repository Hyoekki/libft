/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:20:42 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/04 07:35:15 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		dst_len;
	size_t		remaining_len;

	d = dst;
	s = src;
	dst_len = ft_strlen(d);
	if (!size)
		return (dst_len + ft_strlen(src));
	remaining_len = size - dst_len -1;
	while (*d++)
		;
	while (*src && remaining_len)
	{
		*d++ = *s++;
		remaining_len--;
	}
	*d = '\0';
	return (dst_len + (s - src)); 
}
