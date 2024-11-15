/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:15:45 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:35:50 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_memset(void *s, int c, size_t n) {
	// Allocate memory for s1 and s2
	void *s1 = malloc(n);
	void *s2 = malloc(n);

	if (!s1 || !s2) {
		printf("Memory allocation failed\n");
		free(s1);
		free(s2);
		return;
	}

	// Copy the original memory to s1 and s2
	memcpy(s1, s, n);
	memcpy(s2, s, n);

	// Apply ft_memset and memset
	ft_memset(s1, c, n);
	memset(s2, c, n);

	// Compare the results
	if (memcmp(s1, s2, n) == 0)
		printf("PASS: ft_memset(%p, '%c', %zu) == %p\n", s, c, n, s1);
	else
		printf("FAIL: ft_memset(%p, '%c', %zu) == %p, expected %p\n", s, c, n, s1, s2);

	// Free allocated memory
	free(s1);
	free(s2);
}

