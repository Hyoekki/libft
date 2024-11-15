/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:59:14 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:40:32 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_atoi(const char *str);
void test_ft_bzero(char *s, size_t n, size_t len);
void test_ft_calloc(size_t count, size_t size);
void test_ft_isalnum(int c);
void test_ft_isalpha(int c);
void test_ft_isascii(int c);
void test_ft_isdigit(int c);
void test_ft_isprint(int c);
void test_ft_isspace(int c);
void test_ft_itoa(int n);
void test_ft_memchr(const void *s, int c, size_t n);
void test_ft_memcpy(void *dest, const void *src, size_t n);
void test_ft_memmove(void *dest, const void *src, size_t n);
void test_ft_memset(void *s, int c, size_t n);
void test_ft_putchar_fd(char c, int fd);
void test_ft_putendl_fd(const char *s, int fd);
void test_ft_putnbr_fd(int n, int fd);
void test_ft_putstr_fd(const char *s, int fd);
void test_ft_split(const char *s, char c);
void test_ft_strchr(const char *s, int c);
void test_ft_strdup(const char *s);
void ft_striteri_func(unsigned int i, char *c);
void test_ft_striteri(char *s);
void test_ft_strjoin(const char *s1, const char *s2);
void test_ft_strlcat(char *dst, const char *src, size_t size);
void test_ft_strlcpy(const char *src, size_t dstsize);
void test_ft_strlen(const char *s);
char ft_strmapi_func(unsigned int i, char c);
void test_ft_strmapi(const char *s);
void test_ft_strncmp(const char *s1, const char *s2, size_t n);
void test_ft_strnstr(const char *haystack, const char *needle, size_t len);
void test_ft_strrchr(const char *s, int c);
void test_ft_strtrim(const char *s1, const char *set);
void test_ft_substr(const char *s, unsigned int start, size_t len);
void test_ft_tolower(int c);
void test_ft_toupper(int c);

int main() {
    test_ft_atoi("42");
    test_ft_atoi("   -42");
    test_ft_atoi("4193 with words");
    test_ft_atoi("words and 987");
    test_ft_atoi("-91283472332");
    test_ft_atoi("0");
    test_ft_atoi("+123");
    test_ft_atoi("  +0");
    test_ft_atoi("  -0");
    test_ft_atoi("2147483647");
    test_ft_atoi("-2147483648");
    test_ft_atoi("  0000000000012345678");
    test_ft_atoi("  +0000000000012345678");
    test_ft_atoi("  -0000000000012345678");

	char str1[] = "Hello World";
    char str2[] = "Testing";
    char str3[] = "OpenAI";
    
    test_ft_bzero(str1, 5, strlen(str1));
    test_ft_bzero(str2, 3, strlen(str2));
    test_ft_bzero(str3, 0, strlen(str3));
    test_ft_bzero(str3, strlen(str3), strlen(str3));

	test_ft_calloc(5, sizeof(int));     // Normal case
    test_ft_calloc(0, sizeof(int));     // Zero count
    test_ft_calloc(5, 0);               // Zero size
    test_ft_calloc(0, 0);               // Both zero
    test_ft_calloc(1000, sizeof(char)); // Large allocation

	    test_ft_isalnum('a');   // Lowercase letter
    test_ft_isalnum('Z');   // Uppercase letter
    test_ft_isalnum('0');   // Digit
    test_ft_isalnum(' ');   // Space (should fail)
    test_ft_isalnum(128);   // Extended ASCII

	    test_ft_isalpha('a');   // Lowercase letter
    test_ft_isalpha('Z');   // Uppercase letter
    test_ft_isalpha('0');   // Digit (should fail)
    test_ft_isalpha(' ');   // Space (should fail)
    test_ft_isalpha(128);   // Extended ASCII

	    test_ft_isascii(0);     // NULL
    test_ft_isascii(127);   // DEL
    test_ft_isascii(128);   // Beyond ASCII
    test_ft_isascii(-1);    // Negative
    test_ft_isascii('A');   // Normal char

	    test_ft_isdigit('0');   // First digit
    test_ft_isdigit('9');   // Last digit
    test_ft_isdigit('a');   // Letter (should fail)
    test_ft_isdigit(' ');   // Space (should fail)
    test_ft_isdigit(128);   // Extended ASCII

	    test_ft_isprint(' ');   // Space
    test_ft_isprint('~');   // Last printable
    test_ft_isprint('\n');  // Control char (should fail)
    test_ft_isprint(127);   // DEL (should fail)
    test_ft_isprint(128);   // Extended ASCII

	    test_ft_isspace(' ');   // Space
    test_ft_isspace('\t');  // Tab
    test_ft_isspace('\n');  // Newline
    test_ft_isspace('a');   // Letter (should fail)
    test_ft_isspace(0);     // NULL (should fail)
	
    test_ft_itoa(0);                    // Zero
    test_ft_itoa(-2147483648);          // Min int
    test_ft_itoa(2147483647);           // Max int
    test_ft_itoa(-42);                  // Negative
    test_ft_itoa(42);                   // Positive

	char str[] = "Hello World";
    int arr[] = {1, 2, 3, 4, 5};
    
    test_ft_memchr(str, 'W', strlen(str));        // Normal case
    test_ft_memchr(str, 'Z', strlen(str));        // Character not found
    test_ft_memchr(str, 0, strlen(str));          // Search for null byte
    test_ft_memchr(arr, 3, sizeof(arr));          // Search in int array
    test_ft_memchr("", 'a', 0);                   // Empty string

	    char src[] = "Hello World";
    char dst[20] = {0};
    int src_arr[] = {1, 2, 3, 4, 5};
    int dst_arr[5];
    
    test_ft_memcpy(dst, src, strlen(src) + 1);    // String copy
    test_ft_memcpy(dst_arr, src_arr, sizeof(src_arr)); // Int array copy
    test_ft_memcpy(dst, "Hi", 3);                 // Small string
    test_ft_memcpy(dst, "", 1);                   // Empty string
    test_ft_memcpy(dst, src, 0);                  // Zero length

	char str4[] = "Hello World";
    char overlap[20] = "Hello World";
    int arr1[] = {1, 2, 3, 4, 5};
    
    test_ft_memmove(str4 + 1, str4, strlen(str4));   // Overlapping forward
    test_ft_memmove(overlap, overlap + 1, 5);     // Overlapping backward
    test_ft_memmove(arr1 + 1, arr1, 3 * sizeof(int)); // Int array overlap
    test_ft_memmove(str4, "New", 4);               // No overlap
    test_ft_memmove(str4, str4, 0);                 // Zero length

    char str5[20] = "Hello World";
    int arr2[5] = {1, 2, 3, 4, 5};
    
    test_ft_memset(str5, 'A', 5);                  // Fill with char
    test_ft_memset(str5, 0, sizeof(str5));          // Fill with zeros
    test_ft_memset(arr2, 0xFF, sizeof(arr2));       // Fill int array
    test_ft_memset(str5, '!', 1);                  // Single byte
    test_ft_memset(str5, 0, 0);                    // Zero length

    test_ft_putchar_fd('A', 1);         // Normal char
    test_ft_putchar_fd('\n', 1);        // Newline
    test_ft_putchar_fd('0', 1);         // Number
    test_ft_putchar_fd(' ', 1);         // Space

	test_ft_putendl_fd("Hello, World!", 1);     // Normal string
    test_ft_putendl_fd("", 1);                  // Empty string
    test_ft_putendl_fd("Multiple\nLines", 1);   // Multiple lines
    test_ft_putendl_fd("42", 1);                // Numbers

	test_ft_putnbr_fd(42, 1);               // Positive
    test_ft_putnbr_fd(-42, 1);              // Negative
    test_ft_putnbr_fd(0, 1);                // Zero
    test_ft_putnbr_fd(-2147483648, 1);      // Min int
    test_ft_putnbr_fd(2147483647, 1);       // Max int

	test_ft_putstr_fd("Hello, World!", 1);  // Normal string
    test_ft_putstr_fd("", 1);               // Empty string
    test_ft_putstr_fd("\n", 1);             // Newline
    test_ft_putstr_fd("42", 1);             // Numbers

	test_ft_split("Hello,World,42", ',');           // Normal case
    test_ft_split("   Hello   World   ", ' ');      // Multiple spaces
    test_ft_split("OneWord", ',');                  // No splits
    test_ft_split("", ',');                         // Empty string
    test_ft_split(",,Hello,,World,,", ',');         // Empty segments

	test_ft_strchr("Hello, World!", 'W');    // Character found
    test_ft_strchr("Hello, World!", 'z');    // Character not found
    test_ft_strchr("Hello, World!", '\0');   // Null terminator
    test_ft_strchr("", 'a');                 // Empty string
    test_ft_strchr("Hello, World!", 'H');    // First character

	test_ft_strdup("Hello, World!");       // Normal string
    test_ft_strdup("");                    // Empty string
    test_ft_strdup("A");                   // Single character
    test_ft_strdup("1234567890");          // Numbers
    test_ft_strdup("Special chars !@#$");  // Special characters

    char str6[] = "Hello";
    char str7[] = "Test";
    char str8[] = "A";
    char str9[] = "";
    
    test_ft_striteri(str6); 
    test_ft_striteri(str7);   
    test_ft_striteri(str8);     
    test_ft_striteri(str9);       

	    test_ft_strjoin("Hello, ", "World!");   // Normal case
    test_ft_strjoin("", "World!");          // Empty first string
    test_ft_strjoin("Hello, ", "");         // Empty second string
    test_ft_strjoin("", "");                // Both empty

	    test_ft_strlcat("Hello", ", World!", 20);   // Normal case
    test_ft_strlcat("Hi", " there", 10);        // Buffer too small
    test_ft_strlcat("", "Test", 5);             // Empty dst
    test_ft_strlcat("12345", "", 10);           // Empty src
    test_ft_strlcat("Hello", "World", 0);       // dstsize zero

	    test_ft_strlcpy("Hello, World!", 20);   // Normal case
    test_ft_strlcpy("Hello, World!", 5);    // Truncate
    test_ft_strlcpy("", 10);                // Empty src
    test_ft_strlcpy("Data", 0);             // dstsize zero
    test_ft_strlcpy("LongString", 5);       // Partial copy

	    test_ft_strlen("Hello, World!");       // Normal string
    test_ft_strlen("");                    // Empty string
    test_ft_strlen("A");                   // Single character
    test_ft_strlen("1234567890");          // Numbers
    test_ft_strlen("Special chars !@#$%"); // Special characters

	    test_ft_strmapi("Hello");           // Normal case
    test_ft_strmapi("");                // Empty string
    test_ft_strmapi("A");               // Single char
    test_ft_strmapi("12345");           // Numbers

	    test_ft_strncmp("Hello", "Hello", 5);
    test_ft_strncmp("Hello", "Hell", 5);
    test_ft_strncmp("Hello", "hello", 5);
    test_ft_strncmp("abc", "abd", 3);
    test_ft_strncmp("abc", "abc", 0);
    test_ft_strncmp("", "", 1);
    test_ft_strncmp("abcd", "abce", 4);
    test_ft_strncmp("abcd", "abcd", 10);
    test_ft_strncmp("abcde", "abcd", 5);
    test_ft_strncmp("abcd", "abcde", 5);

	    test_ft_strnstr("Hello World", "World", 11);
    test_ft_strnstr("Hello World", "World", 5);
    test_ft_strnstr("Hello World", "", 5);
    test_ft_strnstr("", "World", 5);
    test_ft_strnstr("Hello", "Hello World", 11);
    test_ft_strnstr("Foo Bar Baz", "Bar", 8);
    test_ft_strnstr("Foo Bar Baz", "Baz", 8);
    test_ft_strnstr("Foo Bar Baz", "Baz", 11);
    test_ft_strnstr("abcdabcabcd", "abc", 10);
    test_ft_strnstr("abcdabcabcd", "abc", 3);

	    test_ft_strrchr("Hello World", 'o');
    test_ft_strrchr("Hello World", 'H');
    test_ft_strrchr("Hello World", 'd');
    test_ft_strrchr("Hello World", 'z');
    test_ft_strrchr("Hello\0World", 'o');
    test_ft_strrchr("", 'a');
    test_ft_strrchr("abcabcabc", 'a');
    test_ft_strrchr("abcabcabc", '\0');

	    test_ft_strtrim("   Hello, World!   ", " ");    // Space trim
    test_ft_strtrim("...Hello...", ".");            // Dot trim
    test_ft_strtrim("Hello", " ");                  // No trim needed
    test_ft_strtrim("", " ");                       // Empty string

	    test_ft_substr("Hello, World!", 7, 5);  // Normal case
    test_ft_substr("Hello", 0, 5);          // Full string
    test_ft_substr("Hello", 5, 5);          // Empty result
    test_ft_substr("", 0, 5);               // Empty string
    test_ft_substr("Hello", 10, 5);         // Start beyond string

	    test_ft_tolower('A');
    test_ft_tolower('Z');
    test_ft_tolower('a');
    test_ft_tolower('z');
    test_ft_tolower('0');
    test_ft_tolower('@');
    test_ft_tolower('[');
    test_ft_tolower(128);
    test_ft_tolower(-5);

	    test_ft_toupper('a');
    test_ft_toupper('z');
    test_ft_toupper('A');
    test_ft_toupper('Z');
    test_ft_toupper('0');
    test_ft_toupper('@');
    test_ft_toupper('[');
    test_ft_toupper(128);
    test_ft_toupper(-5);
}
