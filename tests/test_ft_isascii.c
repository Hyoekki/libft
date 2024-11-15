/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:10:07 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 18:26:01 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isascii(int c) {
	int result = ft_isascii(c);
	int expected = isascii(c);
	if (result == expected)
		printf("PASS: ft_isascii(%d) == %d\n", c, result);
	else
		printf("FAIL: ft_isascii(%d) == %d, expected %d\n", c, result, expected);
}
