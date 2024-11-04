/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:16:29 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:24 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strdup(const char *s) {
	char *result = ft_strdup(s);
	char *expected = strdup(s);
	if (strcmp(result, expected) == 0)
		printf("PASS: ft_strdup(\"%s\") == \"%s\"\n", s, result);
	else
		printf("FAIL: ft_strdup(\"%s\") == \"%s\", expected \"%s\"\n", s, result, expected);
	free(result);
	free(expected);
}
