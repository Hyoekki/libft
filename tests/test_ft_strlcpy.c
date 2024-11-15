/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:19:16 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:15:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strlcpy(const char *src, size_t dstsize) {
    char *dst_ft = malloc(dstsize);
    char *dst_libc = malloc(dstsize);

    if (!dst_ft || !dst_libc) {
        printf("Memory allocation failed\n");
        return;
    }

    memset(dst_ft, 'A', dstsize);
    memset(dst_libc, 'A', dstsize);

    size_t result_ft = ft_strlcpy(dst_ft, src, dstsize);
    size_t expected = strlcpy(dst_libc, src, dstsize);

    if (strcmp(dst_ft, dst_libc) == 0 && result_ft == expected)
        printf("PASS: ft_strlcpy(dst, \"%s\", %zu) == \"%s\", return %zu\n", src, dstsize, dst_ft, result_ft);
    else
        printf("FAIL: ft_strlcpy(dst, \"%s\", %zu) == \"%s\", return %zu; expected \"%s\", return %zu\n", src, dstsize, dst_ft, result_ft, dst_libc, expected);

    free(dst_ft);
    free(dst_libc);
}

