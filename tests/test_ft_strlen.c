/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:21:10 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:15:51 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strlen(const char *s) {
	size_t result = ft_strlen(s);
	size_t expected = strlen(s);
	if (result == expected)
		printf("PASS: ft_strlen(\"%s\") == %zu\n", s, result);
	else
		printf("FAIL: ft_strlen(\"%s\") == %zu, expected %zu\n", s, result, expected);
}
