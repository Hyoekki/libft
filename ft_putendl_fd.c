/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:33:45 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:49:59 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes character string s and writes it into filedescriptor fd
followed by newline.
0 for stdin
1 for stdout
2 for stderr
 */
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
