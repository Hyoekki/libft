/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:41:57 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 09:41:07 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		t;

	p = s;
	t = (unsigned char )c;
	while (n--)
	{
		if (*p == t)
			return (void *)p;
		p++;
	}
	return (NULL);
}
