/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:42:59 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:29:17 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Erase n bytes of the memory starting from pointer s.
Set pointer p equal to s. While n is not equal to zero, erase the memory at p
and decrement n.
 */
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
