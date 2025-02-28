/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:44:16 by jhyokki           #+#    #+#             */
/*   Updated: 2025/02/28 11:30:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

typedef struct s_specifier_map
{
	char	specifier;
	int		(*handler)(va_list *args);
}	t_specifier_map;

extern int		handle_s(va_list *args);
extern int		handle_d(va_list *args);
extern int		handle_percent(va_list *args);
extern int		handle_x(va_list *args);
extern int		handle_capital_x(va_list *args);
extern int		handle_u(va_list *args);
extern int		handle_c(va_list *args);
extern int		handle_p(va_list *args);
extern int		ft_printf(const char *format, ...);
extern void		free_array_of_strings(char **array);
extern int		ft_isalpha(int c);
extern int		ft_isdigit(int c);
extern int		ft_isalnum(int c);
extern int		ft_isascii(int c);
extern int		ft_isprint(int c);
extern int		ft_isspace(int c);
extern size_t	ft_strlen(const char *s);
extern void		*ft_memset(void *s, int c, size_t n);
extern void		ft_bzero(void *s, size_t n);
extern int		ft_memcmp(const void *s1, const void *s2, size_t n);
extern void		*ft_memcpy(void *dest, const void *src, size_t n);
extern void		*ft_memmove(void *dest, const void *src, size_t n);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t size);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strrchr(const char *s, int c);
extern int		ft_strncmp(const char *s1, const char *s2, size_t n);
extern int		ft_tolower(int c);
extern int		ft_toupper(int c);
extern void		*ft_memchr(const void *s, int c, size_t n);
extern char		*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
extern int		ft_atoi(const char *str);
extern void		*ft_calloc(size_t count, size_t size);
extern char		*ft_strdup(const char *s1);
extern char		*ft_substr(char const *s, unsigned int start, size_t len);
extern char		*ft_strjoin(char const *s1, char const *s2);
extern char		*ft_strtrim(char const *s1, char const *set);
extern char		**ft_split(char const *s, char c);
extern char		*ft_itoa(int n);
extern char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
extern void		ft_striteri(char *s, void (*f)(unsigned int, char*));
extern void		ft_putchar_fd(char c, int fd);
extern void		ft_putstr_fd(char *s, int fd);
extern void		ft_putendl_fd(char *s, int fd);
extern void		ft_putnbr_fd(int n, int fd);
extern char		*get_next_line(int fd);

#endif
