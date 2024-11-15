/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:06:00 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:00:15 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_atoi(const char *str) {
	int result = ft_atoi(str);
	int expected = atoi(str);
	if (result == expected)
		printf("PASS: ft_atoi(\"%s\") == %d\n", str, result);
	else
		printf("FAIL: ft_atoi(\"%s\") == %d, expected %d\n", str, result, expected);
}
