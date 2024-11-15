/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:14:04 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:06:37 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_memchr(const void *s, int c, size_t n) {
	void *result = ft_memchr(s, c, n);
	void *expected = memchr(s, c, n);
	if (result == expected)
		printf("PASS: ft_memchr(\"%s\", '%c', %zu) == \"%s\"\n", (char *)s, c, n, (char *)result);
	else
		printf("FAIL: ft_memchr(\"%s\", '%c', %zu) == \"%s\", expected \"%s\"\n", (char *)s, c, n, (char *)result, (char *)expected);
}
