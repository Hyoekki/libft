/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:12:59 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:06:01 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_itoa(int n) {
	char *result = ft_itoa(n);
	char expected[12];
	sprintf(expected, "%d", n);
	if (strcmp(result, expected) == 0)
		printf("PASS: ft_itoa(%d) == \"%s\"\n", n, result);
	else
		printf("FAIL: ft_itoa(%d) == \"%s\", expected \"%s\"\n", n, result, expected);
	free(result);
}
