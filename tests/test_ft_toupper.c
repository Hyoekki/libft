/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:13:35 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 11:11:37 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_toupper(int c) {
	int result = ft_toupper(c);
	int expected = toupper(c);
	if (result == expected)
		printf("PASS: ft_toupper('%c') == '%c'\n", c, result);
	else
		printf("FAIL: ft_toupper('%c') == '%c', expected '%c'\n", c, result, expected);
}
