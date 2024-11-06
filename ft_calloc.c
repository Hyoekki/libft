/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:11:42 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:45:18 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocate memory for the size bytes times count.
Allocate memory for pointer p. Perform NULL check for memory allocation.
Call memset function to set the allocated memory to 0 and return pointer p.
 */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}
