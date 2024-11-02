/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:41:57 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 05:49:28 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		*t;

	p = s;
	t = c;
	while (n--)
	{
		if (*p == t)
			return (void *)p;
		p++;
	}
	return (NULL);
}
