/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:30:43 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 11:15:42 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Takes character string s and prints it into filesdescriptor fd
0 for stdin
1 for stdout
2 for stderr
 */
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
