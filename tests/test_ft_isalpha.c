/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:09:12 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 11:09:34 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isalpha(int c) {
	int result = ft_isalpha(c);
	int expected = isalpha(c);
	if (result == expected)
		printf("PASS: ft_isalpha('%c') == %d\n", c, result);
	else
		printf("FAIL: ft_isalpha('%c') == %d, expected %d\n", c, result, expected);
}
