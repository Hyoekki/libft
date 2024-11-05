/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:11:30 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:11:42 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_strjoin(const char *s1, const char *s2) {
	char *result = ft_strjoin(s1, s2);
	char *expected = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(expected, s1);
	strcat(expected, s2);
	if (strcmp(result, expected) == 0)
		printf("PASS: ft_strjoin(\"%s\", \"%s\") == \"%s\"\n", s1, s2, result);
	else
		printf("FAIL: ft_strjoin(\"%s\", \"%s\") == \"%s\", expected \"%s\"\n", s1, s2, result, expected);
	free(result);
	free(expected);
}
