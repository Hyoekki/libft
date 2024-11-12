/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:18:04 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/12 09:51:18 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a pointer to new string that is copy of string *s1.
 */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(s1) + 1;
	copy = malloc(sizeof(*copy) * size);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s1, size);
	return (copy);
}
