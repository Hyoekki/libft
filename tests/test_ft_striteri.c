/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:13:55 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:22:06 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void ft_striteri_func(unsigned int i, char *c) {
	(void)i;
	*c += 1;
}

void test_ft_striteri(char *s) {
	char *expected = strdup(s);
	for (int i = 0; expected[i]; i++)
		expected[i]++;
	ft_striteri(s, ft_striteri_func);
	if (strcmp(s, expected) == 0)
		printf("PASS: ft_striteri(\"%s\", ft_striteri_func) == \"%s\"\n", s, s);
	else
		printf("FAIL: ft_striteri(\"%s\", ft_striteri_func) == \"%s\", expected \"%s\"\n", s, s, expected);
	free(expected);
}
