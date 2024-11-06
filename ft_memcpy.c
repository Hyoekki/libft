/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:51:56 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:31:48 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copy the n number of bytes of memory from pointer src to pointer dest.
 */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
