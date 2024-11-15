/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:10:44 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 18:26:15 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isdigit(int c){
	int result = ft_isdigit(c);
	int expected = isdigit(c);
	if (result == expected)
		printf("PASS: ft_isdigit('%d') == %d\n", c, result);
	else
		printf("FAIL: ft_isdigit(%d) == %d, expected %d\n", c, result, expected);
}

