/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:11:57 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:12:08 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strtrim(const char *s1, const char *set) {
	char *result = ft_strtrim(s1, set);
	char *expected = strdup(s1);
	char *start = expected;
	while (*start && strchr(set, *start))
		start++;
	char *end = start + strlen(start) - 1;
	while (end > start && strchr(set, *end))
		*end-- = '\0';
	if (strcmp(result, start) == 0)
		printf("PASS: ft_strtrim(\"%s\", \"%s\") == \"%s\"\n", s1, set, result);
	else
		printf("FAIL: ft_strtrim(\"%s\", \"%s\") == \"%s\", expected \"%s\"\n", s1, set, result, start);
	free(result);
	free(expected);
}
