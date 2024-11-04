/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:22:32 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:39 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strncmp(const char *s1, const char *s2, size_t n) {
	int result = ft_strncmp(s1, s2, n);
	int expected = strncmp(s1, s2, n);
	if (result == expected)
		printf("PASS: ft_strncmp(\"%s\", \"%s\", %zu) == %d\n", s1, s2, n, result);
	else
		printf("FAIL: ft_strncmp(\"%s\", \"%s\", %zu) == %d, expected %d\n", s1, s2, n, result, expected);
}
