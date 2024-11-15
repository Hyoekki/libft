/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:16:09 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:12:55 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strchr(const char *s, int c) {
	char *result = ft_strchr(s, c);
	char *expected = strchr(s, c);
	if (result == expected)
		printf("PASS: ft_strchr(\"%s\", '%c') == \"%s\"\n", s, c, result);
	else
		printf("FAIL: ft_strchr(\"%s\", '%c') == \"%s\", expected \"%s\"\n", s, c, result, expected);
}
