/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:45:42 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/12 10:11:02 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the pointer to first occurence of character c in string *s.
 */
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}
