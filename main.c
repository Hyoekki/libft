/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:57:35 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 09:38:09 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> // For the original libc functions
#include <stdlib.h> // For strdup and free
#include <ctype.h> // For isalnum and isascii
#include "libft.h"

void test_ft_bzero(char *s, size_t n, size_t len) {
	char *original = strdup(s); // Duplicate the string to use with libc bzero
	ft_bzero(s, n);
	bzero(original, n);
	if (memcmp(s, original, len) == 0) {
		printf("PASS: ft_bzero(\"%s\", %zu) == \"%s\"\n", s, n, s);
	} else {
		printf("FAIL: ft_bzero(\"%s\", %zu) == \"%s\", expected \"%s\"\n", s, n, s, original);
	}
	free(original); // Free the duplicated string
}

void test_ft_isalnum(int c) {
	int result = ft_isalnum(c);
	int expected = isalnum(c);
	if (result == expected) {
		printf("PASS: ft_isalnum('%c') == %d\n", c, result);
	} else {
		printf("FAIL: ft_isalnum('%c') == %d, expected %d\n", c, result, expected);
	}
}

void test_ft_isalpha(int c) {
	int result = ft_isalpha(c);
	int expected = isalpha(c);
	if (result == expected) {
		printf("PASS: ft_isalpha('%c') == %d\n", c, result);
	} else {
		printf("FAIL: ft_isalpha('%c') == %d, expected %d\n", c, result, expected);
	}
}

void test_ft_isascii(int c) {
	int result = ft_isascii(c);
	int expected = isascii(c);
	if (result == expected) {
		printf("PASS: ft_isascii(%d) == %d\n", c, result);
	} else {
		printf("FAIL: ft_isascii(%d) == %d, expected %d\n", c, result, expected);
	}
}

void test_ft_isdigit(int c){
	int result = ft_isdigit(c);
	int expected = isdigit(c);
	if (result == expected)
		printf("PASS: ft_isdigit('%d') == %d\n", c, result);
	else
		printf("FAIL: ft_isdigit(%d) == %d, expected %d\n", c, result, expected);
}

void test_ft_isprint(int c){
	int result = ft_isprint(c);
	int expected = isprint(c);
	if (result == expected)
		printf("PASS: ft_isprint('%c') == %d\n", c, result);
	else
		printf("FAILL: ft_isprint(%c) == %d, expected %d\n", c, result, expected);
}

void test_ft_strrchr(const char *s, int c) {
	char *result = ft_strrchr(s, c);
	char *expected = strrchr(s, c);
	if (result == expected) {
		printf("PASS: ft_strrchr(\"%s\", '%c') == \"%s\"\n", s, c, result);
	} else {
		printf("FAIL: ft_strrchr(\"%s\", '%c') == \"%s\", expected \"%s\"\n", s, c, result, expected);
	}
}

int main() {
	// Test case 1: Zeroing 6 bytes
	char str1[10] = "abcdef";
	test_ft_bzero(str1, 6, 6);

	// Test case 2: Zeroing 0 bytes (no change)
	char str2[10] = "abcdef";
	test_ft_bzero(str2, 0, 6);

	// Test case 3: Zeroing part of the string
	char str3[10] = "abcdef";
	test_ft_bzero(str3, 3, 6);

	// Test case 4: Zeroing the entire string
	char str4[10] = "abcdef";
	test_ft_bzero(str4, 6, 6);

	// Test alphabetic characters
	test_ft_isalnum('a');
	test_ft_isalnum('Z');

	// Test numeric characters
	test_ft_isalnum('0');
	test_ft_isalnum('9');

	// Test non-alphanumeric characters
	test_ft_isalnum('@');
	test_ft_isalnum(' ');

	// Test alphabetic characters
	test_ft_isalpha('a');
	test_ft_isalpha('Z');

	// Test non-alphabetic characters
	test_ft_isalpha('1');
	test_ft_isalpha('@');

	// Test ASCII characters
	test_ft_isascii(0);
	test_ft_isascii(127);
	test_ft_isascii(65); // 'A'
	test_ft_isascii(97); // 'a'

	// Test non-ASCII characters
	test_ft_isascii(-1);
	test_ft_isascii(128);
	test_ft_isascii(255);

	// Test digit
	test_ft_isdigit(-1);
	test_ft_isdigit(1);

	// Test char
	test_ft_isdigit('a');
	test_ft_isdigit('!');

	// Test char and num
	test_ft_isprint('a');
	test_ft_isprint('3');
	
	// Test non print chars
	test_ft_isprint(0);   // NULL character
	test_ft_isprint(31);  // Unit separator
	test_ft_isprint(127);

	// Test ft_strrchr
	test_ft_strrchr("hello world", 'o');
	test_ft_strrchr("hello world", 'l');
	test_ft_strrchr("hello world", 'z');
	test_ft_strrchr("hello world", '\0');

	return 0;
}
