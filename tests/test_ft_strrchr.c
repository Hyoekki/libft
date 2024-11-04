/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:25:05 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 10:38:46 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strrchr(const char *s, int c) {
	char *result = ft_strrchr(s, c);
	char *expected = strrchr(s, c);
	if (result == expected) {
		printf("PASS: ft_strrchr(\"%s\", '%c') == \"%s\"\n", s, c, result);
	} else {
		printf("FAIL: ft_strrchr(\"%s\", '%c') == \"%s\", expected \"%s\"\n", s, c, result, expected);
	}
}
