/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:24:00 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:42 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strnstr(const char *haystack, const char *needle, size_t len) {
	char *result = ft_strnstr(haystack, needle, len);
	char *expected = strnstr(haystack, needle, len);
	if (result == expected)
		printf("PASS: ft_strnstr(\"%s\", \"%s\", %zu) == \"%s\"\n", haystack, needle, len, result);
	else
		printf("FAIL: ft_strnstr(\"%s\", \"%s\", %zu) == \"%s\", expected \"%s\"\n", haystack, needle, len, result, expected);
}
