/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:13:26 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:16:26 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

char ft_strmapi_func(unsigned int i, char c) {
	(void)i;
	return c + 1;
}

void test_ft_strmapi(const char *s) {
	char *result = ft_strmapi(s, ft_strmapi_func);
	char *expected = strdup(s);
	for (int i = 0; expected[i]; i++)
		expected[i]++;
	if (strcmp(result, expected) == 0)
		printf("PASS: ft_strmapi(\"%s\", ft_strmapi_func) == \"%s\"\n", s, result);
	else
		printf("FAIL: ft_strmapi(\"%s\", ft_strmapi_func) == \"%s\", expected \"%s\"\n", s, result, expected);
	free(result);
	free(expected);
}
