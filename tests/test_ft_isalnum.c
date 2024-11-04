/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:08:44 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 11:09:14 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isalnum(int c) {
	int result = ft_isalnum(c);
	int expected = isalnum(c);
	if (result == expected)
		printf("PASS: ft_isalnum('%c') == %d\n", c, result);
	else
		printf("FAIL: ft_isalnum('%c') == %d, expected %d\n", c, result, expected);
}
