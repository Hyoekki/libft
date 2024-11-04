/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:13:08 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 11:11:34 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_tolower(int c) {
	int result = ft_tolower(c);
	int expected = tolower(c);
	if (result == expected)
		printf("PASS: ft_tolower('%c') == '%c'\n", c, result);
	else
		printf("FAIL: ft_tolower('%c') == '%c', expected '%c'\n", c, result, expected);
}
