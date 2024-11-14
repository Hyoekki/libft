/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:15:04 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_memmove(void *dest, const void *src, size_t n) {
	char *dest1 = strdup(dest);
	char *dest2 = strdup(dest);
	ft_memmove(dest1, src, n);
	memmove(dest2, src, n);
	if (memcmp(dest1, dest2, n) == 0)
		printf("PASS: ft_memmove(\"%s\", \"%s\", %zu) == \"%s\"\n", (char *)dest, (char *)src, n, dest1);
	else
		printf("FAIL: ft_memmove(\"%s\", \"%s\", %zu) == \"%s\", expected \"%s\"\n", (char *)dest, (char *)src, n, dest1, dest2);
	free(dest1);
	free(dest2);
}
