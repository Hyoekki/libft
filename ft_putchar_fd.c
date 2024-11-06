/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:27:59 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:47:49 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes character c and writes it into filedescriptor fd
0 for stdin
1 for stdout
2 for stderr
 */
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
