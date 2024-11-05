/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:12:27 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:12:46 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_split(const char *s, char c) {
	char **result = ft_split(s, c);
	char **expected = malloc(sizeof(char *) * (strlen(s) + 1));
	int i = 0;
	char *token = strtok(strdup(s), &c);
	while (token) {
		expected[i++] = strdup(token);
		token = strtok(NULL, &c);
	}
	expected[i] = NULL;
	int pass = 1;
	for (i = 0; result[i] && expected[i]; i++) {
		if (strcmp(result[i], expected[i]) != 0) {
			pass = 0;
			break;
		}
	}
	if (pass && !result[i] && !expected[i])
		printf("PASS: ft_split(\"%s\", '%c')\n", s, c);
	else
		printf("FAIL: ft_split(\"%s\", '%c')\n", s, c);
	for (i = 0; result[i]; i++)
		free(result[i]);
	free(result);
	for (i = 0; expected[i]; i++)
		free(expected[i]);
	free(expected);
}
