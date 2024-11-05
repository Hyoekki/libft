/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:57:35 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:23:48 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> // For the original libc functions
#include <stdlib.h> // For strdup and free
#include <ctype.h> // For isalnum and isascii
#include "../libft.h"

// Function prototypes for all test functions
void test_ft_atoi(const char *str);
void test_ft_bzero(char *s, size_t n, size_t len);
void test_ft_calloc(size_t count, size_t size);
void test_ft_isalnum(int c);
void test_ft_isalpha(int c);
void test_ft_isascii(int c);
void test_ft_isdigit(int c);
void test_ft_isprint(int c);
void test_ft_memcpy(void *dest, const void *src, size_t n);
void test_ft_memset(void *s, int c, size_t n);
void test_ft_strchr(const char *s, int c);
void test_ft_strlcat(char *dst, const char *src, size_t dstsize);
void test_ft_strlen(const char *s);
void test_ft_strncmp(const char *s1, const char *s2, size_t n);
void test_ft_strnstr(const char *haystack, const char *needle, size_t len);

int main() {
	// Test ft_atoi
	test_ft_atoi("1234567891234567890");
	test_ft_atoi("-123");
	test_ft_atoi("0");
	test_ft_atoi("   42");
	test_ft_atoi("   -42");
	test_ft_atoi("4193 with words");
	test_ft_atoi("words and 987");

	// Test ft_bzero
	char str1[10] = "abcdef";
	test_ft_bzero(str1, 6, 6);

	char str2[10] = "abcdef";
	test_ft_bzero(str2, 0, 6);

	char str3[10] = "abcdef";
	test_ft_bzero(str3, 3, 6);

	char str4[10] = "abcdef";
	test_ft_bzero(str4, 6, 6);

	// Test ft_calloc
	test_ft_calloc(5, sizeof(int));
	test_ft_calloc(10, sizeof(char));
	test_ft_calloc(0, sizeof(int));
	test_ft_calloc(5, 0);

	// Test ft_isalnum
	test_ft_isalnum('a');
	test_ft_isalnum('Z');
	test_ft_isalnum('0');
	test_ft_isalnum('9');
	test_ft_isalnum('@');
	test_ft_isalnum(' ');

	// Test ft_isalpha
	test_ft_isalpha('a');
	test_ft_isalpha('Z');
	test_ft_isalpha('1');
	test_ft_isalpha('@');

	// Test ft_isascii
	test_ft_isascii(0);
	test_ft_isascii(127);
	test_ft_isascii(65); // 'A'
	test_ft_isascii(128);

	// Test digit
	test_ft_isdigit(-1);
	test_ft_isdigit(1);
	test_ft_isdigit('a');
	test_ft_isdigit('!');

	// Test isprint
	test_ft_isprint('a');
	test_ft_isprint('3');
	test_ft_isprint(0);   // NULL character
	test_ft_isprint(31);  // Unit separator
	test_ft_isprint(127);

	// Test ft_memcpy
	char dest1[50] = "Hello, world!";
	char src1[50] = "Goodbye!";
	test_ft_memcpy(dest1, src1, 8);

	char dest2[50] = "Hello, world!";
	test_ft_memcpy(dest2 + 2, dest2, 8);

	// Test ft_memset
	char str5[50] = "Hello, world!";
	test_ft_memset(str5, 'A', 5);

	char str6[50] = "Hello, world!";
	test_ft_memset(str6, 'B', 0);

	// Test ft_strchr
	test_ft_strchr("Hello, world!", 'o');
	test_ft_strchr("Hello, world!", 'z');
	test_ft_strchr("Hello, world!", '\0');
	test_ft_strchr("", 'a');

	// Test ft_strlcat
	char dst1[20] = "Hello";
	test_ft_strlcat(dst1, ", world!", sizeof(dst1));

	char dst2[20] = "Hello";
	test_ft_strlcat(dst2, ", world!", 10);

	char dst3[20] = "";
	test_ft_strlcat(dst3, "Hello", sizeof(dst3));

	char dst4[20] = "Hello";
	test_ft_strlcat(dst4, "", sizeof(dst4));

	// Test ft_strlen
	test_ft_strlen("Hello, world!");
	test_ft_strlen("");
	test_ft_strlen("A");
	test_ft_strlen("This is a longer string to test the length function.");

	// Test ft_strncmp
	test_ft_strncmp("Hello", "Hello", 5);
	test_ft_strncmp("Hello", "Hell", 5);
	test_ft_strncmp("Hello", "hello", 5);
	test_ft_strncmp("Hello", "Hello, world!", 5);
	test_ft_strncmp("Hello", "Hello, world!", 10);
	test_ft_strncmp("", "", 5);
	test_ft_strncmp("Hello", "", 5);
	test_ft_strncmp("", "Hello", 5);

	// Test ft_strnstr
	test_ft_strnstr("Hello, world!", "world", 13);
	test_ft_strnstr("Hello, world!", "world", 5);
	test_ft_strnstr("Hello, world!", "", 13);
	test_ft_strnstr("Hello, world!", "Hello", 5);
	test_ft_strnstr("Hello, world!", "Hello", 13);
	test_ft_strnstr("Hello, world!", "world!", 13);
	test_ft_strnstr("Hello, world!", "world!", 12);
	test_ft_strnstr("", "world", 5);
	test_ft_strnstr("Hello, world!", "world", 0);

	return 0;
}
