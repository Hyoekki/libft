/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:07:07 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:36:23 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_bzero(char *s, size_t n, size_t len) {
	char *original = strdup(s); // Duplicate the string to use with libc bzero
	ft_bzero(s, n);
	bzero(original, n);
	if (memcmp(s, original, len) == 0)
		printf("PASS: ft_bzero(\"%s\", %zu) == \"%s\"\n", s, n, s);
	else
		printf("FAIL: ft_bzero(\"%s\", %zu) == \"%s\", expected \"%s\"\n", s, n, s, original);
	free(original); // Free the duplicated string
}
