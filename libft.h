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

#endif
