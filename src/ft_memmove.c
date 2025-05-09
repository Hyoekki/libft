/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:28:20 by jhyokki           #+#    #+#             */
/*   Updated: 2025/01/23 13:58:25 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies n number of bytes from memory pointed by pointer src to memory pointed by
dest. The src is first copied into temp array and after that to dest.
 */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d != s)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
