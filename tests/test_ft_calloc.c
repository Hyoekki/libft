/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:07:54 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:28:14 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_calloc(size_t count, size_t size) {
	void *result = ft_calloc(count, size);
	void *expected = calloc(count, size);
	if (memcmp(result, expected, count * size) == 0)
		printf("PASS: ft_calloc(%zu, %zu) == %p\n", count, size, result);
	else
		printf("FAIL: ft_calloc(%zu, %zu) == %p, expected %p\n", count, size, result, expected);
	free(result);
	free(expected);
}
