/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:11:10 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:05:02 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../libft.h"

void test_ft_isprint(int c){
	int result = ft_isprint(c);
	int expected = isprint(c);
	if (result == expected)
		printf("PASS: ft_isprint('%c') == %d\n", c, result);
	else
		printf("FAILL: ft_isprint(%c) == %d, expected %d\n", c, result, expected);
}
