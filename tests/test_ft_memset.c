/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:15:45 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:16 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_memset(void *s, int c, size_t n) {
	char *s1 = strdup(s);
	char *s2 = strdup(s);
	ft_memset(s1, c, n);
	memset(s2, c, n);
	if (memcmp(s1, s2, n) == 0)
		printf("PASS: ft_memset(\"%s\", '%c', %zu) == \"%s\"\n", (char *)s, c, n, s1);
	else
		printf("FAIL: ft_memset(\"%s\", '%c', %zu) == \"%s\", expected \"%s\"\n", (char *)s, c, n, s1, s2);
	free(s1);
	free(s2);
}
