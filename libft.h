#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

extern int		ft_isalpha(int c);
extern int		ft_isdigit(int c);
extern int		ft_isalnum(int c);
extern int		ft_isascii(int c);
extern int		ft_isprint(int c);
extern size_t	ft_strlen(const char *s);
extern void		*ft_memset(void *s, int c, size_t n);
extern void		*bzero(void *s, size_t n);
extern void		*ft_memcpy(void *src, void *dest, size_t n);
extern void		*ft_memmove(void *dest, void *src, size_t n);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t size);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);
extern int		to_upper(int c);
extern int		to_lower(int c);

#endif
