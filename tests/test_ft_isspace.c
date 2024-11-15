/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:11:50 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:05:26 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isspace(int c) {
	int result = ft_isspace(c);
	int expected = isspace(c);
	if (result == expected)
		printf("PASS: ft_isspace('%c') == %d\n", c, result);
	else
		printf("FAIL: ft_isspace('%c') == %d, expected %d\n", c, result, expected);
}
