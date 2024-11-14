/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:19:16 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:32 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strlcpy(char *dst, const char *src, size_t size) {
	char *dst1 = strdup(dst);
	char *dst2 = strdup(dst);
	size_t result = ft_strlcpy(dst1, src, size);
	size_t expected = strlcpy(dst2, src, size);
	if (result == expected && strcmp(dst1, dst2) == 0)
		printf("PASS: ft_strlcpy(\"%s\", \"%s\", %zu) == \"%s\" (length: %zu)\n", dst, src, size, dst1, result);
	else
		printf("FAIL: ft_strlcpy(\"%s\", \"%s\", %zu) == \"%s\" (length: %zu), expected \"%s\" (length: %zu)\n", dst, src, size, dst1, result, dst2, expected);
	free(dst1);
	free(dst2);
}
