/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:09:49 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:10:55 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_substr(const char *s, unsigned int start, size_t len) {
	char *result = ft_substr(s, start, len);
	char *expected = strndup(s + start, len);
	if (strcmp(result, expected) == 0)
		printf("PASS: ft_substr(\"%s\", %u, %zu) == \"%s\"\n", s, start, len, result);
	else
		printf("FAIL: ft_substr(\"%s\", %u, %zu) == \"%s\", expected \"%s\"\n", s, start, len, result, expected);
	free(result);
	free(expected);
}
