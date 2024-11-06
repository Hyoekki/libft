/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:41:57 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:17:23 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes pointer s and searches first instance of c for the n number of bytes.
Set variable pointer p equal to s amd while n is not equal to zero, iterate
over the memory and compare p to c. Return pointer p if found and NULL if not.
 */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
