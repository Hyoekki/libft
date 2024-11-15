/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:14:38 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:42:20 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_memcpy(void *dest, const void *src, size_t n) {
    // Allocate memory for expected result
    void *expected = malloc(n);
    if (!expected) {
        printf("Memory allocation failed\n");
        return;
    }

    // Copy the original memory to expected
    memcpy(expected, src, n);

    // Use ft_memcpy to copy the data
    ft_memcpy(dest, src, n);

    // Compare the results
    if (memcmp(dest, expected, n) == 0)
        printf("PASS: ft_memcpy(dest, src, %zu)\n", n);
    else
        printf("FAIL: ft_memcpy(dest, src, %zu)\n", n);

    // Free allocated memory
    free(expected);
}
